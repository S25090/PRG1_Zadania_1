#include <iostream>

int main()
{
    std::string tab[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Podaj imie nr " << i+1 << ": ";
        std::cin >> tab[i];
    }

    std::string str;
    int counter1 = 0;

    for (int i = 0; i < 5; i++)
    {
        str = tab[i];
        char ch = str.back();
        if (ch == 'a')
        {
            counter1++;
        }
    }
    std::cout << "Liczba imion zenskich wynosi: " << counter1 << std::endl;
    std::cout << "Liczba imion meskich wynosi: " << 5 - counter1 << std::endl;
}

