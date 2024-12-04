#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int countCharacter(char* characters, char a) {
	if (characters == nullptr)
	{
		return -1;
	}
	int count = 0;
	while (*characters != '\0') {
		if (*characters == a)
		{
			count++;
		}
		characters++;
	}
	return count;
}

int main()
{
    char line[MAX_SIZE];
    cin.getline(line, MAX_SIZE);
	cout << countCharacter(line,'a');
}
