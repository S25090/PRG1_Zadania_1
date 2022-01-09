#include <iostream>
#include <string>
#include <vector>
#include <sstream>

void boxPrint(std::string wyraz1, std::string wyraz2, std::string wyraz3, std::string wyraz4, std::string wyraz5)
{
    int maxDlugoscWyrazu = 0;
    
    maxDlugoscWyrazu = wyraz1.length();

    if (wyraz2.length() > maxDlugoscWyrazu)
    {
        maxDlugoscWyrazu = wyraz2.length();
    }
    if (wyraz3.length() > maxDlugoscWyrazu)
    {
        maxDlugoscWyrazu = wyraz3.length();
    }
    if (wyraz4.length() > maxDlugoscWyrazu)
    {
        maxDlugoscWyrazu = wyraz4.length();
    }
    if (wyraz5.length() > maxDlugoscWyrazu)
    {
        maxDlugoscWyrazu = wyraz5.length();
    }

    for (int i = 0; i < maxDlugoscWyrazu + 4; ++i)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "* " + wyraz1;
    for (int i = 0; i < maxDlugoscWyrazu - wyraz1.length(); ++i)
    {
        std::cout << " ";
    }
    std::cout << " *" << std::endl;

    std::cout << "* " + wyraz2;
    for (int i = 0; i < maxDlugoscWyrazu - wyraz2.length(); ++i)
    {
        std::cout << " ";
    }
    std::cout << " *" << std::endl;

    std::cout << "* " + wyraz3;
    for (int i = 0; i < maxDlugoscWyrazu - wyraz3.length(); ++i)
    {
        std::cout << " ";
    }
    std::cout << " *" << std::endl;

    std::cout << "* " + wyraz4;
    for (int i = 0; i < maxDlugoscWyrazu - wyraz4.length(); ++i)
    {
        std::cout << " ";
    }
    std::cout << " *" << std::endl;

    std::cout << "* " + wyraz5;
    for (int i = 0; i < maxDlugoscWyrazu - wyraz5.length(); ++i)
    {
        std::cout << " ";
    }
    std::cout << " *" << std::endl;
    
    for (int i = 0; i < maxDlugoscWyrazu + 4; ++i)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}


int main() {
    std::cout << "Wprowadz zdanie skladajace sie z conajmniej 5 wyrazow: " << std::endl;
    std::string zdanie;
    std::vector<std::string> vector;
    std::getline(std::cin, zdanie);
    std::string wyraz;

    std::stringstream ss(zdanie);

    while (std::getline(ss, wyraz, ' ')) 
    {
        vector.push_back(wyraz);
    }

    if (vector.size() >= 5)
    {
        boxPrint(vector[0], vector[1], vector[2], vector[3], vector[4]);
    }
    else
    {
        std::cout << "Zdanie nie ma 5 wyrazow!" << std::endl;
    }
}

