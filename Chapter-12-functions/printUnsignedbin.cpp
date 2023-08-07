// This one is slightly trickier. Write a program that asks the user to enter a positive integer, and then uses a recursive function to print out the binary representation for that number. Use method 1 from lesson O.4 -- Converting integers between binary and decimal representation.
//  Extra credit: Update your code from 3a to handle the case where the user may enter 0 or a negative number.

// Here’s a sample output (assuming 32-bit integers):


#include <iostream>

void printBinary(unsigned int n){
  if(n > 1) {
    printBinary(n / 2);
  }
    
    std::cout << n % 2;
}


int main()
{
    int n;
	std::cout << "Enter a positive integer: ";
	std::cin >> n;
    
    printBinary(static_cast<unsigned int>(n));
    
    return 0;
}