#include <iostream>
using namespace std;

int getLastBits(int number, int k) {
	int result = 0;
	while (k > 0) {
		int mask = 1 << k-1;
		k--;
		result += mask & number;
	}
	return result;
}

int main()
{
	cout << getLastBits(189, 4);
}
