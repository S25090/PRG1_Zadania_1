#include <iostream>
#include <sstream>


auto main() -> int
{
	int dzielna = 1;
	int dzielnik;

	std::stringstream ss;

	while (dzielna <= 20)
	{
		for (dzielnik = 2; dzielnik <= dzielna; dzielnik++)
		{
			if (dzielna % dzielnik == 0)
			{
				if (dzielna == dzielnik)
				{
					std::cout << dzielna << " ";
					ss << dzielna << " ";
				}
				else
				{
					break;
				}
			}
		}
		dzielna++;
	}
	std::cout << std::endl;
	std::string str = ss.str();
	std::cout << str << std::endl;
	return 0;
}