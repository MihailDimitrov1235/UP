#include <iostream>
using namespace std;

int* combine(const int* arr1, const int* arr2, int size1, int size2) {

	if (arr1 == nullptr || arr2 == nullptr)
	{
		return nullptr;
	}

	int* result = new int[size1+size2];
	int i = 0, j = 0, k = 0;

	while (i < size1 && j < size2) {
		if (arr1[i] < arr2[j])
		{
			result[k] = arr1[i];
			i++;
		}
		else {
			result[k] = arr2[j];
			j++;
		}
		k++;
	}


	while (j < size2) {
		result[k] = arr2[j];
		j++;
		k++;
	}

	while (i < size1) {
		result[k] = arr1[i];
		i++;
		k++;
	}

	return result;
}

int main() {
	int size1, size2;
	cin >> size1 >> size2;
	int* arr1 = new int[size1];
	for (size_t i = 0; i < size1; i++)
	{
		arr1[i] = i * 2;
		cout << arr1[i]<< " ";
	}
	cout << endl;

	int* arr2 = new int[size2];
	for (size_t i = 0; i < size2; i++)
	{
		arr2[i] = i;
		cout << arr2[i]<< " ";
	}
	cout << endl;
	int* result = combine(arr1, arr2, size1, size2);
	for (size_t i = 0; i < size1 + size2; i++)
	{
		cout << result[i] << " ";
	}
	delete[] arr1;
	delete[] arr2;
	delete[] result;
}
