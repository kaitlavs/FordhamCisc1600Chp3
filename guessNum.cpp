// Kaitlyn Lavan
// October 10, 2017
// code to generate random number

#include <iostream>
using namespace std;

int main()
{
	// variables
	unsigned int userGuess, computerNum;

	// init
	computerNum = 57; 
	
	do
	{
		cout << "Enter a number from 1 - 100 : ";
		cin >> userGuess;
		
		if (userGuess == computerNum)
			cout << "Succcess! You are right!"  << endl;
		else if (userGuess > computerNum)
			cout << "No! Your guess is too high" << endl;
		else if (userGuess < computerNum)
			cout << "No! Your guess is too low" << endl;
	
	} while (userGuess != computerNum);

	cout << "Have a nice day!" << endl;

return 0;
}

