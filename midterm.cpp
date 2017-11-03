// Kaitlyn Lavan
// October 20, 2017
// review for exam

#include <iostream> // allows us to cout(display someting on counsel) and cin (communicate to computer)
using namespace std;

int main()
{
	//vars
	string name;	// "Hello from Fordham!"  "A" 
	double pi;	// 3.14149
	char rerun;     // 'a'  '?'  '@'
	bool again; 	// true    false 
	int a, b, c, total; 	// -10   0   30000 (if you type a decimal as an int, it will chop off the decimal places and only show the whole number
	
	//init
	total = 0;
	again = true; //if you did not initalize your bool to true, it might not have been true already 

	area = length * width;  //assigment operator, you place the left side value into the right side variable

	// relational operators
	// > < >= <= == != we use in conditionals, if, else, these are relational operators 

	//math operators
	// + - * / % (modules - tells you the remainder) 12 % 6 = 0, 17 % 5 = 2
	
	//#1
	if (month ==1)
	{ 
		cout << "January" << endl;	
	}



	// #2 you will execute the code at least once, and then keeps going as long as the last condition is true 
	do
	{

	} while (rerun == 'Y');



	// #3
	if (month <= 12)
	{ // shift 5 will take you to the matching bracket 
		cout << "good month" << endl;
	else
	{
		cout << "invalid month" << endl;
	}



	// #4 good to use ehrn you have multiple things 
	switch (month) 
	{
		case 1:
			cout << "January" << endl;
		break;

		case 2: 
			cout << "February" << endl;
		break;
 
		default:
			cout << "error" << endl;
		break;
	}

	// #5
	for (i=0; i < len; i++;) // init, conditional check (to see if you stay in for loop), and the incredmental piece once you hit the bottom bracket.
	{

	}
	
	//#6 while
	while (month > 0)
	{ 
		cout << "month = " << month << endl;

		month--;//decrements and month++; increments. month += 2; (take the current value of month, and then add 2 to it)
	}


	//#7 nested if then else 
	if (month == 1)
	else if (month ==2)
	else if (month ==3)
	else 

	while (again == true)
	{
	
	}

	a = 3.9;
	cout << " a = " << a << endl;

	// &&   ||  - they are boolian operations, "and" and "or" 

return 0;
}
