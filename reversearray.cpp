#include <iostream>


void populate(int**, int, int);


int main()
{
    int  rows, cols;

    std::cout << "Enter no. of rows and columns:\n";
    std::cin >> rows >> cols;

    int **matrix;

    matrix = new int*[rows];
    for(int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    populate(matrix, rows,cols);

    return 0;
}


void populate(int** aMatrix, int no_rows, int no_cols){
    for( int i = 0; i < no_rows; ++i)
        for( int j = 0; j < no_cols; ++j)
            aMatrix[i][j] = i + 2*j - 1;
}
