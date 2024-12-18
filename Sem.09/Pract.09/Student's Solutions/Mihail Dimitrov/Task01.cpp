#include <iostream>
using namespace std;

size_t getLength(char* str) {
	size_t len = 1;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

char* censorStr(char* str) {

	size_t length = getLength(str);

	char* result = new char[length];

	for (size_t i = 0; i < length - 1; i++)
	{
		if (*str >= '0' && *str <= '9')
		{
			result[i] = '*';
		}
		else {
			result[i] = *str;
		}
		str++;
	}

	result[length - 1] = '\0';

	return result;
}

int main() {
	char str[] = "Hello 323 ppl";
	char* censored = censorStr(str);
	cout << censored;
	delete[] censored;
}
