#include<stdio.h>
#include<windows.h>
#include<string.h>
#define RED 12		// color definitions
#define GREEN 10
#define YELLOW 14
#define WHITE 15
#define BLUE 9
#define LIGHTBLUE 11

void Menu(char* choice);
void Accept(char* answer);

static char choice, answer;

int main(void){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	
	printf("\n\t\tWelcome to Flight Information System\n\n");
	
	do{
		Menu(&choice);	
		Accept(&answer);
		system("cls");
		if(answer == '1'){
			switch(choice){
				case '1':	break;
				case '2':	break;
				case '3':	break;
				case '4':	break;
				case '5': continue; break;
				default : printf("You have entered an invalid option. Please try again.\n");	break;
			}
		}	
	}while(choice != '5' || answer != '1');
	
	system("pause");
	return 0;
}
// menu options
void Menu(char* choice){
	printf("\n1- Add new flight plan\n"
	"2- Cancel flight plan\n"
	"3- View all flight plans\n"
	"4- Search flight plan\n"
	"5- Exit the program\n"
	"Select the operation you want to perform: ");
	scanf(" %s", choice);
}
// function that confirms the user's continuation of the operation
void Accept(char* answer){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);

	printf("\nDo you want to continue with the operation?\n");
	SetConsoleTextAttribute(hConsole, 10);
	printf("Continue = 1 ");
	SetConsoleTextAttribute(hConsole, 12);
	printf("Cancel = 0\n");
	SetConsoleTextAttribute(hConsole, 11);
	printf("Answer: ");
	scanf(" %s", answer);
}