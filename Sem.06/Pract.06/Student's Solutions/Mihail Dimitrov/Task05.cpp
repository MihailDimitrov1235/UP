#include <iostream>
using namespace std;

bool isPart(int number, int k) {
	int mask = 0;
	int k1 = k;
	while (k1 != 0) {
		mask = (mask << 1) + 1;
		k1 >>= 1;
	}
	
	while (number != 0)
	{
		if ((number & mask) == k)
		{
			return true;
		}

		number >>= 1;
	}

	return false;
}

int main()
{
	cout << (isPart(15, 3)?"true" : "false");
}
