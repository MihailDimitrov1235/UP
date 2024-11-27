#include <iostream>
using namespace std;

int convertToDecimal(int number, int system) {
	int result = 0;
	int i = 0;
	while (number != 0) {
		result = result + (number % 10)*pow(system, i);
		number /= 10;
		i++;
	}
	return result;
}

int reverseNumber(int number) {
	int result = 0;
	while (number != 0) {
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}

int convertFromDecimal(int number, int system) {
	int result = 0;
	int zeros = 0;
	bool start = true;
	while (number != 0) {
		int digit = number % system;
		if (digit == 0 && start)
		{
			zeros++;
		}
		else
		{
			start = false;
		}
		result = result * 10 + (number % system);
		number /= system;
	}
	
	result = reverseNumber(result);

	for (size_t i = 0; i < zeros; i++)
	{
		result *= 10;
	}
	return result;
}

int changeNumberSystem(int number, int startSystem, int endSystem) {
	int decimal = convertToDecimal(number, startSystem);
	return convertFromDecimal(decimal, endSystem);
}

int main()
{
	cout << changeNumberSystem(10, 8, 2);
}
