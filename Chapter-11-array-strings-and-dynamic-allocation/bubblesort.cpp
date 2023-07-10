#include <iostream>
#include <iterator>
#include <utility>


int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    constexpr int length { static_cast<int>(std::size(array)) };

    for (int startIndex { 0 }; startIndex < length - 1; ++startIndex )
    {
        for (int currentIndex { 0 }; currentIndex < length - 1; ++currentIndex)
        {
            if(array[currentIndex] > array[currentIndex + 1])
            {
                std::swap(array[currentIndex], array[currentIndex + 1]);
            }
        }
    }

    for (int index{ 0 }; index < length; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';

    return 0;
}