/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:37:18 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:37:22 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

void ft_replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: ivalid s1 or s2."  << std::endl;
		return;
	}
	std::ifstream input_file(filename.c_str());
	if (!input_file.is_open())
	{
		std::cerr << "Error: cannot open file." << std::endl;
		return ;
	}
	std::string output_filename = filename + ".replace";
	std::ofstream output_file(output_filename.c_str());
	if (!output_file.is_open())
	{
		throw std::runtime_error("Error: create output file.");
		return ;
	}
	std::string line;
	while (std::getline(input_file, line))
	{
		size_t place = line.find(s1, 0);
        while (place != std::string::npos)
        {
            line.erase(place, s1.length());
            line.insert(place, s2);
			place += s2.length();
            place = line.find(s1, place);
        }
        output_file << line << std::endl;
    }
    input_file.close();
    output_file.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments" << std::endl
		<< "Try use <valid_file> <string1> <string2>" << std::endl;
		return (1);
	}
	ft_replace(argv[1], argv[2], argv[3]);
	return (0);
}
