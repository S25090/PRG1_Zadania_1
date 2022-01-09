
#include <iostream>

bool isEven(int);

int main()
{
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    if (isEven(liczba))
    {
        std::cout << "Liczba parzysta." << std::endl;
    }
    else
    {
        std::cout << "Liczba nieparzysta." << std::endl;
    }
}

bool isEven(int liczba)
{
    if(liczba % 2 == 0)
    {
        return true;
    }
    else
    { 
        return false;
    }
}