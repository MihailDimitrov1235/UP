#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

char* getPrefix(char* characters1, char* characters2, char* characters3 ) {
	if (characters1 == nullptr || characters2 == nullptr || characters3 == nullptr)
	{
		return nullptr;
	}
	char result[MAX_SIZE];
	int i = 0;
	while (*characters1 != '\0' && *characters1 == *characters2 && *characters1 == *characters3) {
		result[i] = *characters1;
		i++;
	}
	result[i] = '\0';
	return result;
}

int main()
{
    char line1[MAX_SIZE];
	char line2[MAX_SIZE];
	char line3[MAX_SIZE];
    cin.getline(line1, MAX_SIZE);
	cin.getline(line2, MAX_SIZE);
	cin.getline(line3, MAX_SIZE);
	cout << getPrefix(line1,line2,line3);
}
