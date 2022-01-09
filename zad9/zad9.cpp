#include <iostream>
#include <string>

bool isPalindrome(std::string slowo);

int main()
{
	std::string slowo;
	std::cout << "Wprowadz slowo: ";
	std::cin >> slowo;

	if (isPalindrome(slowo))
	{
		std::cout << "To slowo jest palindromem." << std::endl;
	}
	else
	{
		std::cout << "To slowo nie jest palindromem." << std::endl;
	}
}

bool isPalindrome(std::string slowo)
{
	bool isNotPalindrom = false;

	for (int i = 0; i < slowo.length() / 2; i++)
	{
		if (slowo[i] != slowo[slowo.length() - 1 - i])
		{
			isNotPalindrom = true;
		}
	}

	if (isNotPalindrom)
	{
		return false;
	}
	else
	{
		return true;
	}
}