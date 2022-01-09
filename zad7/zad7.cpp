
#include <iostream>
#include <string>

int countChars(std::string napis, char znak);

int main() 
{
    std::string napis;

    char znak='a';
    std::cout << "Wprowadz napis w ktorym chcesz policzyc liczbe wystapien znaku: ";
    std::cin >> napis;
    std::cout << "Wprowadz znak: ";
    std::cin >> znak; 
    std::cout << std::endl;
    std::cout << "Znak '" << znak << "' wystapil " << countChars(napis, znak) << " razy" << std::endl;
    return 0;
}

int countChars(std::string napis, char znak)
{
    int licznik = 0;

    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] == znak)
        {
            ++licznik;
        }
    }
    return licznik;
}