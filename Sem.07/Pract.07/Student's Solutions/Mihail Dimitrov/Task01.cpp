#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

char* getSmallLetters(char* characters) {
	if (characters == nullptr)
	{
		return nullptr;
	}
	char result[MAX_SIZE];
	int i = 0;
	while (*characters != '\0') {
		if (*characters>='a' && *characters<='z')
		{
			result[i] = *characters;
			i++;
		}
		characters++;
	}
	result[i] = '\0';
	return result;
}

int main()
{
    char line[MAX_SIZE];
    cin.getline(line, MAX_SIZE);
	cout << getSmallLetters(line);
}
