#include <iostream>
#include <ctime>

void swaper(int cols, int** array, int row1, int row2)
{
    int addelement;
    for (int i = 0; i < cols; i++)
    {
        addelement = array[row1][i];
        array[row1][i] = array[row2][i];
        array[row2][i] = addelement;
    }
    return;
}

int main()
{
    srand(time(0));
    int rows, cols;
    std::cout << "Enter array size (rows and columns):";
    std::cin >> rows >> cols;
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand();
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    int row1, row2;
    std::cout << std::endl << "Enter number of swaping row(row1 row2):";
    std::cin >> row1 >> row2;
    row1 -= 1;
    row2 -= 1;
    swaper(cols, array, row1, row2);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
