#include <iostream>

int main()
{
    std::string imie1, imie2;
    std::cout << "Podaj pierwsze imie: ";
    std::cin >> imie1;
    std::cout << "Podaj drugie imie: ";
    std::cin >> imie2;

    if (imie1.length() > imie2.length())
    {
        std::cout << "Pierwsze imie jest dluzsze od drugiego!" << std::endl;
    }
    else if (imie2.length() > imie1.length())
    {
        std::cout << "Drugie imie jest dluzsze od pierwszego..." << std::endl;
    }
    else if (imie1.length() == imie2.length())
    {
        std::cout << "Imiona sa rownej dlugosci." << std::endl;
    }
       
}
