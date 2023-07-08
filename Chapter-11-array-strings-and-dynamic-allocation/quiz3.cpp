#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>


int main()
{
    int number {};

    do 
    {
        std::cout << "Enter a number between 1-9: ";
        std::cin >> number;

        // if the user entered something invalid
        if (std::cin.fail())
        {
            std::cin.clear(); // reset any error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
        }
    }
    while(number < 1 || number > 9);

    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    for (int index{ 0 }; index < static_cast<int>(std::size(array)); ++index)
    {
        std::cout << array[index] << ' ';
    }

    std::cout << '\n';

    for (int i = 0; i < static_cast<int>(std::size(array)); ++i )
    {
        if (number == array[i])
        {
            std::cout <<  "The number " << number << " has index " <<  i << '\n';
            break;
        }
    }

    std::cout << '\n';
    
    return 0;
}