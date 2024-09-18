#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int number;
	int calculation;
	cout << "Enter a Number : ";
		cin >> number;
		if (number < 0) { 
			cout << "Nice try, please enter a POSITIVE number...: " << endl;
			cin >> number;
		}
		 if (number >= 0) {
			int counter = 0;
			int calculation = 1;
			cout << number << "! = ";
			for (counter = 1; counter < number+1; counter++) {
				cout << counter << " * ";
				calculation *= counter; 
		}
			cout << " = " << calculation << endl;
			
		}
		
} 
void arithmetic() {
	int number;
	int first;
	int add;
	int series;
	int i;
	int calculation = 0;
	
	

		cout << "Enter a number to start at: ";
		cin >> first;
		
		cout << endl << "Enter a number to add each time: ";
		cin >> add; 
		cout << endl << "Enter the number of elements in the series: ";
		cin >> series;
		if (series < 0) {
			cout << "Nice try, please enter a POSITIVE number...: " << endl;
			cin >> series;
		}
		for (i = 0; i < series; i++) {
			cout << first << " + ";
			calculation += first;
			first += add;
			
		}
		cout << " = " << calculation << endl;
		

		
	}



void geometric() {
	int first;
	int mult;
	int series;
	int i;
	int calculation = 1;
	cout << "Enter a number to start at: ";
	cin >> first;
	cout << endl << "Enter a number to multiply by each time: ";
	cin >> mult;
	cout << endl << "Enter the number of elements in the series: ";
	cin >> series;
	if (series < 0) {
		cout << "Nice try, please enter a POSITIVE number...: " << endl;
		cin >> series;
	}
	for (i = 0; i < series; i++) {
		cout << first << " + ";
		calculation += first;
		first *= mult;
	}
	cout << " = " << calculation - 1 << endl;



}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}