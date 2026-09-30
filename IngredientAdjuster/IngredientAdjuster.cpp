// This program calculates the adjusted amount per ingredient based off how many cookies the user wants to bake. 
#include <iostream>
using namespace std;
int main() 
{
	cout << "Sugar Cookie Recipe!" << endl;
	// Variables and Calculations:
	double sugarNeeded, butterNeeded, flourNeeded, multiplier, desiredCookies;
	cout << "How Many Cookies Do You Need To Make? "; cin >> desiredCookies;
	multiplier = desiredCookies / 48;
	sugarNeeded = 1.5 * multiplier;
	butterNeeded = 1.0 * multiplier;
	flourNeeded = 2.75 * multiplier;
}
