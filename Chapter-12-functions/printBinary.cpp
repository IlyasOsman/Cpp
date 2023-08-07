// This one is slightly trickier. Write a program that asks the user to enter a positive integer, and then uses a recursive function to print out the binary representation for that number. Use method 1 from lesson O.4 -- Converting integers between binary and decimal representation.

#include <iostream>

void printBinary(int n){
    if(n ==0)
        return;
    
    printBinary(n / 2);
    
    std::cout << n % 2;
}


int main()
{
    int n;
	std::cout << "Enter a positive integer: ";
	std::cin >> n;
    
    printBinary(n);
    
    return 0;
}