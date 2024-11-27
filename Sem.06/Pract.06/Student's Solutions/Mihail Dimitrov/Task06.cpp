#include <iostream>
using namespace std;

const int SIZE = 7;

int getUniqueNumber(int arr[]) {
	if (SIZE == 1)
	{
		return arr[0];
	}
	int result = arr[0]^arr[1];
	for (size_t i = 2; i < SIZE; i++)
	{
		result ^= arr[i];
	}
	return result;
}

int main()
{
	int arr[SIZE] = { 9, 18, 9, 12, 18, 15, 12 };
	cout << getUniqueNumber(arr);
}
