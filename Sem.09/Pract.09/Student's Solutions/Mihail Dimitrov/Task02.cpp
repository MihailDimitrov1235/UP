#include <iostream>
using namespace std;

size_t countSmall(const char* str) {
	size_t count = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			count++;
		}
		str++;
	}
	return count;
}
size_t countLarge(const char* str) {
	size_t count = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			count++;
		}
		str++;
	}
	return count;
}

char** getSmallAndLargeStr(const char* str) {

	if (str == nullptr)
	{
		return nullptr;
	}

	size_t smallCount = countSmall(str);
	size_t largeCount = countLarge(str);

	cout << smallCount << " " << largeCount << endl;

	char* resultSmall = new char[smallCount + 1];
	char* resultLarge = new char[largeCount + 1];

	char* dummySmall = resultSmall;
	char* dummyLarge = resultLarge;

	while (*str != '\0') {
		if (*str >= 'a' && *str <= 'z')
		{
			*resultSmall = *str;
			resultSmall++;
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			*resultLarge = *str;
			resultLarge++;
		}
		str++;
	}

	*resultSmall = '\0';
	*resultLarge = '\0';

	char** result = new char*[2];
	result[0] = dummySmall;
	result[1] = dummyLarge;
	return result;
}

int main() {
	char str[] = "Hello 323 ppl";
	char** result = getSmallAndLargeStr(str);
	cout << result[0]<< endl;
	cout << result[1];
	delete[] result[0];
	delete[] result[1];
	delete[] result;
}
