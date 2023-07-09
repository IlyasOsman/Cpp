#include <iostream>
#include <iterator>
#include <string_view>

void print(int number) {
    constexpr int  divisors[] {3, 5, 7, 11, 13, 17, 19};
    constexpr std::string_view words[]{ "fizz", "buzz", "pop", "bang", "jazz", "pow", "boom" };
    static_assert(std::size(divisors) == std::size(words));

    for(int i { 0 }; i <= number; ++i)
    {
        bool printed { false };

        for(int j { 0 }; j < static_cast<int>(std::size(divisors)); ++j) {

            if (i % divisors[j] == 0)
			{
				std::cout << words[j];
				printed = true;
			}

        }

        if(!printed) {
            std::cout << i ;
        }

        std::cout << '\n';
    }
}

int main()
{

    print(30);

    return 0;
}