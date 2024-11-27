#include <iostream>
using namespace std;

const int SIZE = 5;

void getSubsets(int arr[]) {
	size_t pow2 = pow(2, SIZE);
	for (size_t i = 0; i < pow2; i++)
	{
		cout << "[ ";
		int idx = i;
		int count = 0;
		while (idx != 0) {
			if ((idx&1) == 1)
			{
				cout << arr[count]<<" ";
			}
			count++;
			idx <<= 1;
		}
		cout << "]\n";
	}
}

int main()
{
	int arr[SIZE] = {};
	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = i + 1;
	}
	getSubsets(arr);
}
