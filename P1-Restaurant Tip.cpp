#include <iostream>
using namespace std;

// main() program execution begins.
int main() {
	double billAmount = 0.0;
	double tipPercent = 0.0;

	cout << "Enter the bill amount (in dollars): "; // Prompts user
	cin >> billAmount; // Stores user input into billAmount

	cout << "Enter the tip percentage (%): "; // Prompts user
	cin >> tipPercent; // Stores user input into tipPercent

	double tipAmount = billAmount * (tipPercent / 100.0); // Calculate the tip amount

	double total = tipAmount + billAmount; // Add tip + bill to get the total

	cout << "You need to pay " << 
		total << 
		" that is " << 
		billAmount << 
		" for the food + " << 
		tipAmount << 
		" as tip." << 
		endl; // print the output

	return 0;
}