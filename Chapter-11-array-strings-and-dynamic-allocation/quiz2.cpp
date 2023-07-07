#include <iostream>
#include "animals.h"


int main()
{
    int legs[animals::max_animals] { 2, 4, 4, 4, 2, 0 };

     std::cout << "An elephant has " << legs[animals::elephant] << " legs.\n";

    return 0;
}