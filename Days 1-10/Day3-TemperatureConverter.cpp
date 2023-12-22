// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Day 3: Temperature Converter
		Write a program that asks the user for a temperature in Fahrenheit and
		prints out the same temperature in Celsius.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <iostream>

// -----------------------------------------------------------------------------

int main()
{
	// ask user for temperature in Fahrenheit
	std::cout << "Enter a temperature in Fahrenheit: ";

	// create variable to store user input
	double fahrenheit = 0;

	// read user input and store in variable
	std::cin >> fahrenheit;

	// convert Fahrenheit to Celsius
	float celsius = (fahrenheit - 32) * 5 / 9;

	// print out temperature in Celsius
	std::cout << "The temperature in Celsius is: " << celsius << std::endl;

	// pause console to read output
	std::cout << "Press any key to exit followed by enter...";
	int quit = 0;
	std::cin >> quit;

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
