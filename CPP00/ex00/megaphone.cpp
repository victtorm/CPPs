# include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc >= 2)
    {
        j = 1;
        while (argv[j])
        {
            i = 0;
            while(argv[j][i])
                std::cout << (char)toupper(argv[j][i++]);
            j++;
        }
    }
	else
		std::cout << "* ND UNBEARABLE FEEDBACK NOISE *";
        std::cout << std::endl;
}