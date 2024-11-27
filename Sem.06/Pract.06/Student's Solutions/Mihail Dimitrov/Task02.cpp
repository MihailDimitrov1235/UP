#include <iostream>
using namespace std;

int numberOfOnes(int number) {
	int count = 0;

	while (number != 0) {
		if (number%2 == 1)
		{
			count++;
		}
		number /= 2;
	}

	return count;
}

int main()
{
	cout << numberOfOnes(189);
}
