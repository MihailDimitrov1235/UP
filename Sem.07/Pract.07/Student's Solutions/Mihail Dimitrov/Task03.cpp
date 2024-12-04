#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

char* replaceOddAndEven(char* characters, char x, char a, char b) {
	if (characters == nullptr)
	{
		return nullptr;
	}
	char result[MAX_SIZE];
	int i = 0;
	bool isOdd = true;
	while (*characters != '\0') {
		if (*characters == x)
		{
			if (isOdd) {
				result[i] = a;
			}
			else {
				result[i] = b;
			}
			isOdd != isOdd;
		}
		else {
			result[i] = *characters;
		}
		i++;
		characters++;
	}
	result[i] = '\0';
	return result;
}

int main()
{
    char line[MAX_SIZE];
    cin.getline(line, MAX_SIZE);
	cout << replaceOddAndEven(line,'_', 'e', 'o');
}
