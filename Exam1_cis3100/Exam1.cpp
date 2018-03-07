//MD Abir A. Choudhury
//022418
//CIS 3100 - Exam # 1 
//Office Rental

#include <iostream>
#include <istream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int choice = 0;
	int count = 0;
	int days = 0;
	double monthlyCharge = 0.0;
	double phoneCharge = 0.0;
	double average = 0.0;
	char phoneChoice;
	char afterChoice;

	//loop
	do {
		//output --> display message
		cout << "Need Office Space?\n"
			<< "==================\n"
			<< "Choose one option from below: \n"
			<< "1- Private Office\n"
			<< "2- Colocation\n"
			<< "3- Temporary Workspace\n"
			<< "0- Exit\n"
			<< "Which space would you like to choose?\n";
		cin >> choice;

		//processing
		if (choice == 1) {
			monthlyCharge += 1000;
			//get phone service --> yes or no
			cout << "Phone service? (y/n)\n";
			cin >> phoneChoice;
			if (phoneChoice == 'y') {
				cout << "How many minutes do you need? \n";
				cin >> phoneCharge;
				monthlyCharge += (phoneCharge * .5); // calculate monthlyCharge with phoneCharge
			}
			cout << "Your monthly charge is " << monthlyCharge << endl;
			count++; //increment count
		}

		else if (choice == 2) {
			monthlyCharge += 500;
			//get phone service --> yes or no
			cout << "Phone service? (y/n)\n";
			cin >> phoneChoice;
			if (phoneChoice == 'y') {
				cout << "How many minutes do you need? \n";
				cin >> phoneCharge;
				monthlyCharge += (phoneCharge * .5); // calculate monthlyCharge with phoneCharge
			}
			cout << "Your monthly charge is " << monthlyCharge << endl;
			count++; //increment count
		}

		else if (choice == 3) {
			cout << "Enter the number of days you need? ";
			cin >> days;
			monthlyCharge += (days * 60); // calculate monthlyCharge with days
										  //get phone service --> yes or no
			cout << "Phone service? (y/n)\n";
			cin >> phoneChoice;
			if (phoneChoice == 'y') {
				cout << "How many minutes do you need? \n";
				cin >> phoneCharge;

				monthlyCharge += (phoneCharge * .5); // calculate monthlyCharge with phoneCharge
			}
			cout << "Your monthly charge is " << monthlyCharge << endl;
			count++; //increment count
		}

		else if (choice == 0) {
			break;
		}

		//ask for another quote
		cout << "Another quote? (y/n) \n";
		cin >> afterChoice;
		cout << "\n";
		if (afterChoice == 'n') {
			choice = 0;
		}
	} while (choice != 0);

	//calculate average
	average = monthlyCharge / count;

	if (choice != 0) {
		cout << "Average quotation provided was $" << fixed << setprecision(2) << average << endl;
	}

	else {
		cout << "\nThank you for using our service!\n";
	}

	system("PAUSE");
	return 0;
}
