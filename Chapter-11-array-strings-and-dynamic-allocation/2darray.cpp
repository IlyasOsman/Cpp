#include <iostream>


int main()
{
    constexpr int num_rows { 10 };
    constexpr int num_col { 10 };

    int product [num_rows][num_col] {  };
    
    for (int i { 1 }; i < num_rows; ++i)
    {
        for (int j { 1  }; j < num_col; ++j)
        {
            product[i][j] = i * j;
        }
    }

    for (int row{ 1 }; row < num_rows; ++row)
    {
        for (int col{ 1 }; col < num_col; ++col)
        {
            std::cout << product[row][col] << '\t';
        }

        std::cout << '\n';
    }



    return 0;
}