#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int displayMenu();
int getUserNum();
void displayValue();

int calculation(int choice);



int main() {
	vector<int>hP = { 100 };
	int choice;
	int hit = 0;
	//need to add a variable to add extra dmg to for each time "wait" is successful
	cout << "Welcome to the stage of text history. Press 0 to exit.\n";
	cout << "Press 0 to exit\n";
	cout << "1. Seek challenge\n";
	cout << "2. Training\n";
	choice = getUserNum();
	switch (choice) {
	case 0:
		cout << "Exiting.\n";
	case 1:
		//while {
			displayMenu();
			hit = calculation(choice);
			//for (int i = 0; i < hP.size(); i--);
			//add conditional to not show "you did 0 damage" but instead say either "guard up" or skip dialog completley if the user selects "wait
			
		//} while //(hP 0);

			//for () 
			break;
	case 2:
		displayValue();
		break;

		}
	return 0;
}


void displayValue() {
	cout << "Health = 100/-undetermined-\n";
	cout << "Punch = -undetermined-\n";
	cout << "Kick = -undetermined-\n";
	cout << "Combo = -undetermined-\n";
	cout << "Wait = Makes your next action do extra damage\n";

}

int displayMenu() {
	int choice=0;

	cout << "hey this worked. neat\n";
	//either add an extra line of text that prints a diff msg for when the encounter is still happening
	//or move the lines to main in a do-while loop

	cout << "1. Punch\n";
	cout << "2. Kick\n";
	cout << "3. Combo\n";
	cout << "4. Wait\n";
	cout << "5. Block\n";
	choice = getUserNum();


	return (choice);
}
	

	int getUserNum() {
		int input = -1;
		do {
			cin >> input;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Invalid input. Try again.\n";
				input = -1;
			}
		} while (input < 0);

		return input;
	}


	int calculation(int choice)
{
	int dmg = 0;
	if (choice == 1) {
		choice = 5;
	}
	else if (choice == 2) {
		choice = 7;
	}
	else if (choice == 3) {
		choice = 35;
	}
	else if (choice == 4) {
		choice == 0;
	}
	else if (choice == 5) {
		choice == 0;

	}
	else {
		cout << "invalid\n";
	}

	dmg = choice;
	cout << "You did " << dmg << " Damage!";
		//add extra line to include bonus damage from "Wait"

	return (dmg);
}
