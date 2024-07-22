#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define RED 12		// color definitions
#define GREEN 10
#define YELLOW 14
#define WHITE 15
#define BLUE 9
#define LIGHTBLUE 11

struct Passengers{
	int id;
	char name[20];
	char surname[20];
	char departure[20];
	char destination[20];
	struct Passengers* next;
};

struct Passengers* start = NULL;
struct Passengers* temp = NULL;

void Menu(char* choice);
void Accept(char* answer);
void AddFlightPlan();
void DeleteFlightPlan();
void ViewAllFlightPlan();
void SearchFlightPlan();

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
				case '1':	AddFlightPlan();		break;
				case '2':	DeleteFlightPlan();		break;
				case '3':	ViewAllFlightPlan();	break;
				case '4':	SearchFlightPlan();		break;
				case '5': 	continue; break;
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
	"4- Search for flight plan by ID number\n"
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
// function that creates a new flight plan by adding a node to the end
void AddFlightPlan(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	
	struct Passengers* newPass = (struct Passengers*)malloc(sizeof(struct Passengers));
	
	printf("\nEnter the passenger's ID number: ");
	scanf("%d", &newPass->id);
	printf("Enter the passenger's name: ");
	scanf("%s", newPass->name);
	printf("Enter the passenger's surname: ");
	scanf("%s", newPass->surname);
	printf("Enter the departure location of the flight: ");
	scanf("%s", newPass->departure);
	printf("Enter the destination of the flight: ");
	scanf("%s", newPass->destination);

	newPass->next = NULL;
	
	if(start == NULL){
		start = newPass;
	}
	else{
		temp = start;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newPass;
	}
	
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n\t\tFlight plan has been succesfully added.\n\n");
	
	SetConsoleTextAttribute(hConsole, 11);
	system("pause");
	system("cls");
}
// function that deletes a flight plan based on the user-entered ID number
void DeleteFlightPlan(){
	//
}
// function that displays all flight plans using the travel operation
void ViewAllFlightPlan(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	
	if(start == NULL){
		SetConsoleTextAttribute(hConsole, 12);
		printf("\n\nThere are no registered flight plans. Please add a flight plan through the menu.\n\n");
		SetConsoleTextAttribute(hConsole, 11);
	}
	else{
		temp = start;
		while(temp != NULL){
			printf("\n%d %s %s | %s => %s\n", temp->id, temp->name, temp->surname, temp->departure, temp->destination);
			temp = temp->next;
		}
		
		SetConsoleTextAttribute(hConsole, 10);
		printf("\n\n\t\tAll flight plans have been listed.\n\n");
	}
	
	SetConsoleTextAttribute(hConsole, 11);
	system("pause");
	system("cls");
}
// function that searches for a flight plan based on the user-entered ID number
void SearchFlightPlan(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	
	int id, isFind = 0;
	
	printf("\nEnter the ID number of the passenger whose flight plan you want to know: ");
	scanf("%d", &id);
	
	temp = start;

	if(temp == NULL){
		SetConsoleTextAttribute(hConsole, 12);
		printf("\n\n\tThere are no registered flight plans. Please add a flight plan through the menu.\n\n");
		SetConsoleTextAttribute(hConsole, 11);
	}
	else{
		while(temp != NULL){
			if(temp->id == id){
				isFind = 1;
				break;
			}
			temp = temp->next;
		}

		if(isFind == 1){
			printf("\n\n%d %s %s | %s => %s \n\n", temp->id, temp->name, temp->surname, temp->departure, temp->destination);
			SetConsoleTextAttribute(hConsole, 10);
			printf("\n\t\tThe passenger you are looking for has been found.\n\n");
			SetConsoleTextAttribute(hConsole, 11);
		}
		else{
			SetConsoleTextAttribute(hConsole, 12);
			printf("\n\n\tNo passenger found with the entered ID number. Please try again.\n\n");
			SetConsoleTextAttribute(hConsole, 11);
		}	
	}
		
	system("pause");
	system("cls");
}