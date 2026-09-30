// This program calculates the adjusted amount per ingredient based off how many cookies the user wants to bake. 
#include <iostream>
using namespace std;
int main() 
{
	cout << "\t\t\tSugar Cookie Recipe!" << endl; cout << endl;
	// Variables and Calculations:
	double sugarNeeded, butterNeeded, flourNeeded, multiplier, desiredCookies;
	cout << "How Many Cookies Do You Need To Make? " << endl; cin >> desiredCookies;
	cout << endl;
	cout << endl;
	multiplier = desiredCookies / 48;
	sugarNeeded = 1.5 * multiplier;
	butterNeeded = 1.0 * multiplier;
	flourNeeded = 2.75 * multiplier;
	// Adjusted Ingredient List
	cout << "\t\t\t Precise Ingredients Needed: " << endl;
	// Sugar
	cout << "Sugar:\t" << sugarNeeded;
	if (sugarNeeded <= 1)
	{
		cout << " cup." << endl;
	}
	else 
	{
		cout << " cups" << endl;
	}
	// Butter 
	cout << "Butter:\t" << butterNeeded; 
	if (butterNeeded <= 1)
	{
		cout << " cup." << endl;
	}
	else
	{
		cout << " cups." << endl;
	}
	// Flour
	cout << "Flour:\t" << flourNeeded; 
	if (flourNeeded <= 1)
	{
		cout << " cup." << endl;
	}
	else
	{
		cout << " cups." << endl;
	}

	cout << "\t\t\tEnjoy!";

	return 0;

}
