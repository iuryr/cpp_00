#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		std::locale loc;
		int i = 1;
		while(i < argc)
		{
			std::string str = argv[i];
			for (unsigned long j = 0; j < str.length(); j++)
			{
				std::cout << std::toupper(str[j], loc);
			}
			std::cout << ' ';
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
