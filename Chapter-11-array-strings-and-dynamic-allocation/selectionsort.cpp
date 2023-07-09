#include <iostream>
#include <iterator>
#include <utility>


int main()
{
    int array[] { 30, 60, 20, 50, 40, 10 };
    int length{ static_cast<int>(std::size(array)) };

    for (int startIndex { 0 }; startIndex < length - 1; ++startIndex) 
    {
        int smallestIndex { startIndex };

        for (int currentIndex { startIndex + 1 }; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
        }

        std::swap(array[startIndex], array[smallestIndex]);
        
        std::cout << '[' ;
        for (int index{ 0 }; index < length; ++index)
		    { std::cout << array[index] << ' '; }
        std::cout << ']' << '\n';
    }

    std::cout << "Sorted array : " ;
    for (int index{ 0 }; index < length; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';

    return 0;
}