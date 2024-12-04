#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

char* getSubstring(char* characters, int beg, int end) {
	if (characters == nullptr)
	{
		return nullptr;
	}
	char result[MAX_SIZE];
	if (beg >= MAX_SIZE || beg > end) {
		result[0] = '\0';
		return result;
	}
	while (beg > 0) {
		characters++;
		beg--;
		end--;
	}
	int i = 0;
	while (*characters != '\0' && end >= 0) {
		result[i] = *characters;
		i++;
		characters++;
		end--;
	}
	result[i] = '\0';
	return result;
}

int main()
{
    char line[MAX_SIZE];
    cin.getline(line, MAX_SIZE);
	cout << getSubstring(line,5,6);
}
