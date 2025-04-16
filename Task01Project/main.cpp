#include "logic.h"
#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    cout << "Input size of matrix (n m): ";
    cin >> n >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];

    cout << "Input elements of your matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    vector <int> result = get_columns_with_all_even_elements(matrix, n, m);

    if (result[0] == -1)
    {
        cout << "Invalid matrix!\n";
    }
    else if (result.empty())
    {
        cout << "There is no columns with all even elements!\n";
    }
    else
    {
        cout << "Number of columns with all positive elements: ";
        for (int n : result)
        {
            cout << n << " ";
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}