#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x , int y);
main()
{
system("cls");
printMaze;
gotoxy(12,14);
cout << " P ";
}

void printMaze()
{
cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
cout << " %                                         % " << endl;
cout << " %                                         % " << endl;
cout << " %                                         % " << endl;
cout << " %                                         % " << endl;
cout << " %                                         % " << endl;
cout << " %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
