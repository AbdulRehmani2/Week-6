#include <iostream>
#include <Windows.h>

using namespace std;

void printMaze();
void gotoxy();
void clear(int x, int y, char previous);
void showPacMan(int x, int y);
void showGhost(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
	int gx = 1;
	int gy = 5;
	string direction = "right";
	char previousChar = ' ';
	system("cls");
	printMaze();
	showGhost(gx, gy);
	while (true)
	{
		Sleep(100);
		if (direction == "right")
		{
			char nextLocation = getCharAtxy(gx + 1, gy);
			if (nextLocation == '%')
			{
				direction = "left";
			}
			else if (nextLocation == ' ' || nextLocation == '.')
			{
				clear(gx, gy, previousChar);
				gx = gx + 1;
				previousChar = nextLocation;
				showGhost(gx, gy);
			}
		}
		if (direction == "left")
		{
			char nextLocation = getCharAtxy(gx - 1, gy);
			{
				if (nextLocation == '%')
				{
					direction = "right";
				}
				else if (nextLocation == ' ' || nextLocation == '.')
				{
					clear(gx, gy, previousChar);
					gx = gx - 1;
					previousChar = nextLocation;
					showGhost(gx, gy);
				}
			}
		}
	}
}

void printMaze()
{
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%                                 %" << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void clear(int x, int y, char previous)
{
	gotoxy(x, y);
	cout << previous;
}

void showGhost(int x, int y)
{
	gotoxy(x, y);
	cout << "G";
}

char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = { 0, 0 };
	SMALL_RECT rect = { x, y, x, y };
	COORD coordBuffSize;
	coordBuffSize.X = x;
	coordBuffSize.Y = y;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBuffSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

