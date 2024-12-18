#include <iostream>
using namespace std;

bool compare( int** matrix1, int** matrix2, int ROWS, int COLS) {

	if (matrix1 == nullptr || matrix2 == nullptr)
	{
		return false;
	}

	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (matrix1[i][j] != matrix2[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	const int ROWS = 2;
	const int COLS = 2;
	int** matrix1 = new int* [ROWS];
	int** matrix2 = new int* [ROWS];
	for (size_t i = 0; i < ROWS; i++)
	{
		matrix1[i] = new int[COLS];
		for (size_t j = 0; j < COLS; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	for (size_t i = 0; i < ROWS; i++)
	{
		matrix2[i] = new int[COLS];
		for (size_t j = 0; j < COLS; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	cout << compare(matrix1, matrix2, ROWS, COLS);

	for (size_t i = 0; i < ROWS; i++)
	{
		delete[] matrix1[i];
		delete[] matrix2[i];
	}
	delete[] matrix1;
	delete[] matrix2;
}
