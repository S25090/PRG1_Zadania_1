#include <iostream>

bool isEven(int);
bool isDivisible(int liczba, int dzielnik);

int main()
{
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;


    if (isEven(liczba))
    {
        std::cout << "Ta liczba jest parzysta." << std::endl;
    }
    else
    {
        std::cout << "Ta liczba nie jest parzysta." << std::endl;
    }
}

bool isEven(int liczba)
{
    return isDivisible(liczba, 2);
}

bool isDivisible(int liczba, int dzielnik)
{
    if (liczba % dzielnik == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}