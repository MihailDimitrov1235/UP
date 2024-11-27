#include <iostream>
using namespace std;

int convertRightBit(int number) {
	int initialValue = number;
	int i = 0;
	while (number != 0 && number == initialValue) {
		number = number >> i;
		number = number << i;
		i++;
	}
	return number;
}

int main()
{
	cout << convertRightBit(15);
}
