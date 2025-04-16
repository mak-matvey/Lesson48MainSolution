#include "logic.h"

vector <int> get_columns_with_all_even_elements(int** matrix,
	int n, int m)
{
	vector <int> result;

	if (matrix == nullptr || n <= 0 || m <= 0)
	{
		result.push_back(-1);

		return result;
	}

	for (int j = 0; j < m; j++)
	{
		bool all_even = true;
		for (int i = 0; i < n; i++)
		{
			all_even = matrix[i][j] % 2 != 0 ? false : true;
		}

		if (all_even)
		{
			result.push_back(j);
		}
	}

	return result;
}