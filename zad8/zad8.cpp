
#include <iostream>

void wyswietlNtyZnak(std::string napis, int n);

int main()
{
    std::string napis;
    int n;

    std::cout << "Wprowadz napis: ";
    std::cin >> napis;
    std::cout << "Wprowadz wartosc n: ";
    std::cin >> n;

    wyswietlNtyZnak(napis, n);

}

void wyswietlNtyZnak(std::string napis, int n)
{
    for (int i = 0; i < napis.length(); i = i + n)
    {
        std::cout << napis[i] << " ";
    }
}