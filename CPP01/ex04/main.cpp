
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

void ft_replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: s1 or s2 is empty."  << std::endl;
		return;
	}
	try
	{
		std::ifstream input_file(filename.c_str());
		if (!input_file.is_open())
			throw std::runtime_error("Error: " + filename + "not open.");
		std::string output_filename = filename + ".replace";
		std::ofstream output_file(output_filename.c_str());
		if (!output_file.is_open())
			throw std::runtime_error("Error: create output file.");
		std::string line;
		while (std::getline(input_file, line))
		{
			size_t place = line.find(s1, 0);
            while (place != std::string::npos)
            {
                line.erase(place, s1.length());
                line.insert(place, s2);
                place = line.find(s1, 0);
            }
            output_file << line << std::endl;
        }
        input_file.close();
        output_file.close();
	}
	catch (const std::exception &e)
	{
		throw e;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments" << std::endl
		<< "Try use ...." << std::endl;
	}
	try{
		ft_replace(argv[1], argv[2], argv[3]);
	}
	catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}