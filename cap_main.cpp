#include<iostream>
#include<vector>
#include<string>
using namespace std;

int getUserNum();//user input
int calculation(int choice);//run calc if choice is punch/kick/combo
//bool checkAction():check if getUserNum/choice is = wait/block choice
void displayMenu();//see numbers
int blocking(int choice);
int oppAction();
int oppBlock(int oppSelect);
int oppCalc(int oppSelect);



int main() {
	int choice;
	int hit = 0;
	int oppSelect;
	int oppHit = 0;
	//next step is to add in the health numbers
	cout << "Welcome to the stage of text history. Press 0 to exit.\n";
	cout << "Press 0 to exit\n";
	cout << "1. Seek challenge\n";
	cout << "2. Training\n";
	choice = getUserNum();
	//cin.ignore();
	switch (choice) {
	case 0:
		cout << "Exiting.\n";
	case 1:
		do {
			cout << "Action: \n1.Punch\n2.Kick\n3.Combo\n4.Block\n5.Wait\n";
			choice = getUserNum();
			bool checkAction(choice);
			if ((choice) != 4) {
				hit = calculation(choice);
				cout << "you did " << hit << " damage" << endl;
			}
			else {
				blocking(choice);
			}

			oppSelect = oppAction();
			bool checkOppAction(oppSelect);
			if ((oppHit) != 4) {
				oppHit = oppCalc(oppSelect);
				cout << "Opp did " << oppHit << " damage" << endl;
			}
			else {
				oppBlock(oppSelect);
			}

		} while (choice);
	case 2:
		displayMenu();
		break;
	}

	return 0;
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
	int dmg{};
	if (choice == 1) {
		dmg = 5;
	}
	else if (choice == 2) {
		dmg = 7;
	}
	else if (choice == 3) {
		dmg = 35;
	}
	else {
		cout << "invalid\n";
	}
	return dmg;
}

int blocking(int choice) {
	if (choice == 4) {
		cout << "Standing by\n";
		int idle{};
		return idle;
	}
	else {
		cout << "Guard up\n";
		int guard{};
		return guard;
	}

}



int oppAction()
{
	int n = 1 + rand() % 5;

	return n;
}

int oppCalc(int oppSelect)
{
	int dmg=0;
	if (oppSelect == 1) {
		dmg = 5;
	}
	else if (oppSelect == 2) {
		dmg = 7;
	}
	else if (oppSelect == 3) {
		dmg = 35;
	}
	else {
		cout << "invalid\n";
	}
	return dmg;

}

int oppBlock(int oppSelect)
{
	if (oppSelect == 4) {
		cout << "Opp is standing by\n";
		int oppStand{};
		return oppStand;
	}
	else {
		cout << "Opps guard is up\n";
		int oppBlock{};
		return oppBlock;
	}
}







void displayMenu() {
	cout << "Health = 100/-undetermined-\n";
	cout << "Punch = -undetermined-\n";
	cout << "Kick = -undetermined-\n";
	cout << "Combo = -undetermined-\n";
	cout << "Wait = Makes your next action do extra damage\n";
}

