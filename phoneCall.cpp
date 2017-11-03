// Kaitlyn Lavan
// October 6, 2017
// code to calculate the price of a long-distance phone call 

#include <iostream>
using namespace std;

int main()
{
	// variables 
	int time, length;
	double rpm, cost;
	string dayofWeek;
	char rerun;

	//init 
	cout.setf(ios::fixed); 
	cout.setf(ios::showpoint);
	cout.precision(2);

	do
	{
		// input
		cout << "Enter the day of the week the phone call was made (Mo Tu We Th Fr Sa Su) : ";
		cin >> dayofWeek;
		cout << "What time was the phone call started? ";
		cin >> time; 
		cout << "Enter the length of the phone call (in minutes) : ";
		cin >> length;

		//processing
		if (dayofWeek == "Mo")
		{		
			if (time > 800 && time < 1800)
				rpm = 0.40; 
			else
				rpm = 0.25;
		}

		else if (dayofWeek == "Tu")
		{
			if (time > 800 && time < 1800)
				rpm = 0.40; 
			else
				rpm = 0.25;
		}
		 
		else if (dayofWeek == "We")
		{	
			if (time > 800 && time < 1800)
				rpm = 0.40; 
			else
				rpm = 0.25;
		}

		else if (dayofWeek == "Th")
		{
			if (time > 800 && time < 1800)
				rpm = 0.40; 
			else
				rpm = 0.25;
		}

		else if (dayofWeek == "Fr")
		{
			if (time > 800 && time < 1800)
				rpm = 0.40; 
			else
				rpm = 0.25;
		}	

		else if (dayofWeek == "Sa" || dayofWeek == "Su")
			rpm = 0.15;

		else 
		{
			cout << "Sorry! That is invalid input!" << endl;
			return 0;
		}

		//output
		cost = length * rpm;
		cout << "The cost of the phone call is $ " << cost << endl;

		// ask user for another run
		cout << "Would you like to run another calculation? Y= yes N = no ";
		cin >> rerun;
 		} while (rerun == 'Y' || rerun == 'y');
		
	cout << "Have a nice day!" << endl;
return 0;
}



