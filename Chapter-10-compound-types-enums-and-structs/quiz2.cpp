#include <iostream>

struct Fraction 
{
    int numerator {};
    int denominator {};
};

// Dont return temp by reference, it's local variable hence leave a dangling reference
Fraction getFraction() 
{
    Fraction temp;

    std::cout << "Enter a value for the numerator: " << '\n';
    std::cin >> temp.numerator;

    std::cout << "Enter a value for the denominator: " << '\n';
    std::cin >> temp.denominator;

    return temp;
}

Fraction multiplyFraction (const Fraction& fraction1, const Fraction& fraction2)
{
    return { fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator };
}

void print(const Fraction& f) {
    std::cout << f.numerator << '/' << f.denominator;
}


int main()
{
    Fraction fractionOne { getFraction() };
    Fraction fractionTwo { getFraction() };

    print(multiplyFraction(fractionOne, fractionTwo));

    return 0;
}