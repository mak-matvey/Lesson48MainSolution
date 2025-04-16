#include "logic.h"

vector<int> get_indices_columns_with_negative_diagonal(int** matrix, int n, int m)
{
    vector<int> column_indices;

    if (matrix == nullptr || n <= 0 || m <= 0)
    {
        return column_indices;
    }

    for (int j = 0; j < m && j < n; j++)
    {
        if (matrix[j][j] < 0)
        {
            column_indices.push_back(j);
        }
    }

    return column_indices;
}

vector<int> get_sums_of_columns_with_negative_diagonal(int** matrix, int n, int m)
{
    vector<int> column_sums;

    if (matrix == nullptr || n <= 0 || m <= 0)
    {
        return column_sums;
    }

    for (int j = 0; j < m && j < n; j++)
    {
        if (matrix[j][j] < 0)
        {
            int sum = 0;

            for (int i = 0; i < n; i++)
            {
                sum += matrix[i][j];
            }

            column_sums.push_back(sum);
        }
    }

    return column_sums;
}