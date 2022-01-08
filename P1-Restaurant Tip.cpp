#include <iostream>
using namespace std;

double roundToNextInteger(double x){
	int integer = x;
	double thousands = (x - integer) * 1000.0;
	int hundreds = thousands / 10;
	int thousandsPlace = ((int)thousands - hundreds*10);

	if (thousandsPlace > 0){
		return integer + (hundreds + 1.0)/100.0;
	} else {
		return integer + hundreds/100.0;
	}
}

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

	cout << "You need to pay $" << 
		roundToNextInteger(total) << 
		" that is $" << 
		roundToNextInteger(billAmount) << 
		" for the food + $" << 
		roundToNextInteger(tipAmount) << 
		" as tip." << 
		endl; // print the output

	return 0;
}