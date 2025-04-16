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

    vector <int> sum_of_diagonal_with_negative_elements =
        get_sums_of_columns_with_negative_diagonal(matrix, n, m);
    vector <int> indices_of_diagonal_with_negative_elements = 
        get_indices_columns_with_negative_diagonal(matrix, n, m);
    
    if (sum_of_diagonal_with_negative_elements.empty()
        || indices_of_diagonal_with_negative_elements.empty())
    {
        cout << "There is no columns with negative elements on main diagonal.";
    }
    else
    {
        cout << "Sums: ";

        for (int c : sum_of_diagonal_with_negative_elements)
        {
            cout << c << " ";
        }

        cout << "\nIndices: ";

        for (int c : indices_of_diagonal_with_negative_elements)
        {
            cout << c << " ";
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}