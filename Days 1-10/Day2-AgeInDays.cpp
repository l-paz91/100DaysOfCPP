// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Day 2: Age in Days
		Write a program that asks the user to enter their age in years and
		then displays the age in days. Don't worry about fractional years and
		leap years.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <iostream>

// -----------------------------------------------------------------------------

int main()
{
	// print to console
	std::cout << "What is your age?";

	// create variable to store user input
	int age = 0;

	// store user input in variable
	std::cin >> age;

	// calculate age in days
	int ageInDays = age * 365;

	// print to console
	std::cout << "Your age in days is: " << ageInDays << "\n";

	// pause console to read output
	std::cout << "Press any key to exit followed by enter...";
	int quit = 0;
	std::cin >> quit;

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
