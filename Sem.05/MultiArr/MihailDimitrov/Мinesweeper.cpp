#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;
const int MINES = 4;
const char CLOSED = 219;
const char EMPTY = '0';
const char MINE = 'M';

const char OPEN = 'o';
const char MARK = 'm';
const char UNMARK = 'u';


void drawBoard(char arr[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			if (arr[i][j] == MINE)
			{
				cout << CLOSED << " ";
			}else{
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}

bool isInputValid(char command, int x, int y) {
	if (command != OPEN && command != MARK && command != UNMARK)
	{
		cout << "Invalid command\n";
		return false;
	}
	return true;
}

int main()
{
	char arr[ROWS][COLS]{};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = CLOSED;
		}
	}

	for (int i = 0; i < MINES; i++)
	{
		int x, y;
		do
		{
			x = rand() % COLS;
			y = rand() % ROWS;
		} while (arr[x][y] == MINE);
		arr[x][y] = MINE;
	}

	do
	{
		drawBoard(arr);
		cout << "Insert command and coordinates (o - open, m - mark, u - unmark)\n";
		char command;
		int x, y;
		do
		{
			cin >> command >> x >> y;
		} while (!isInputValid(command,x,y));
	} while (true);
}
