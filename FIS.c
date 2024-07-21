#include<stdio.h>
#include<windows.h>
#include<string.h>
#define RED 12		// color definitions
#define GREEN 10
#define YELLOW 14
#define WHITE 15
#define BLUE 9


void Menu(char* choice);

static char choice;

int main(void){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);
	Menu(&choice);
	
	
	
	
	system("pause");
	return 0;
}

void Menu(char* choice){
	printf("1- Add new flight plan\n"
	"2- Cancel flight plan\n"
	"3- View all flight plans\n"
	"4- Search flight plan\n"
	"5- Exit the program\n"
	"Select the operation you want to perform: ");
	scanf(" %s", choice);
}