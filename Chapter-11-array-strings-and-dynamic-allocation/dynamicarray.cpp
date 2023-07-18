#include <iostream>
#include <algorithm>


int main()
{
    std::cout << "How many names would you like to enter?" << '\n';
    int length {};
    std::cin >> length;

    std::string* names  { new std::string[length] {} };

    for(int i {}; i < length; ++i)
    {
        std::cout << "Enter name #" << i+1 << ": " << '\n';
        std::getline(std::cin >> std::ws, names[i]);
    }

    std::sort(names, names + length);

    std::cout << "\nHere is your sorted list:\n";

    for (std::size_t i{ 0 }; i < length; ++i)
        std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';

    return 0;
}