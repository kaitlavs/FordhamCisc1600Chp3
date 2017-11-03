// Kaitlyn Lavan
// October 3, 2017
// code to learn switch statement

#include <iostream>
using namespace std;

int main()
{
	//variables
	char cityCode, dayofWeek;
	int flightTime;
	double priceOneTicket, numberofTickets, amountOwed, amountPayed, change;	

	//init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//input
	cout << "Welcome to Fordham airlines!" << endl;
	cout << "Enter a city to fly to [C]hicago, [M]iami, [P]ortland : ";
	cin >> cityCode;

	//processing
	switch (cityCode)
	{
		case 'C':
		case 'c':
			cout << "Chicago destination!" << endl;
			cout << "Enter time to fly : ";
			cin >> flightTime;
			cout << "Enter the type of day you are traveling (week[E]end or week[D]ay :";
			cin >> dayofWeek;
				switch (dayofWeek)
				{
				   case 'D':
				   case 'd':
				            if (flightTime > 500 && flightTime < 1859) 
					       priceOneTicket = 75;
					    else 
					       priceOneTicket = 50;
				   break;

				   case 'E':
				   case 'e':
				            if (flightTime > 500 && flightTime < 1859) 
					       priceOneTicket = 90;
					    else 
					       priceOneTicket = 60;
				   break;

				   default:
					    cout << "Sorry! Invalid code." << endl;
				   return 0; 
				   break;
				}	
		break;

		case 'M':
		case 'm':
			cout << "Miami destination!"  << endl;
			cout << "Enter time to fly : ";
			cin >> flightTime;
			cout << "Enter type of day you are traveling? (week[E]nd or week[D]day) :"; 
			cin >> dayofWeek;
				switch (dayofWeek)
				{
				   case 'D':
				   case 'd':
				            if (flightTime > 500 && flightTime < 1859) 
						priceOneTicket = 150;
					    else 
						priceOneTicket = 100;
				   break;

				   case 'E':
				   case 'e': 
					    if (flightTime > 500 && flightTime < 1859)
						priceOneTicket = 180;
				            else 
						priceOneTicket = 120;
				   break;
				   
				   default:
					    cout << "Sorry! invalid code." << endl;
					    return 0;
					    break;
				}
		break;

		case 'P':
		case 'p':
			cout << "Portland destination!" << endl;
			cout << "Enter time to fly : ";
			cin >> flightTime;
			cout << "Enter the time you will travel? (week[E]nd or week[D]ay) :";
			cin >> dayofWeek;
				switch (dayofWeek)
				{
				   case 'D':
				   case 'd':
					    if (flightTime > 500 && flightTime < 1859)
						priceOneTicket = 300;
					    else 
						priceOneTicket = 200;
				   break;

				   case 'E':
				   case 'e':
					    if (flightTime > 500 && flightTime < 1859) 
						priceOneTicket = 360;
					    else 
						priceOneTicket = 240;
				   break;

				   default:
					   cout << "Sorry! Invalid code." << endl;
				   return 0;
				   break;
				}

		break;


		default:
			cout << "Sorry! Invalid Code" << endl;
		return 0;
		break;
	}

	//output and input for pricing 
	cout << "Each ticket will cost: $ " << priceOneTicket << endl;
	cout << "How many tickets do you want? ";
	cin >> numberofTickets;
	if (numberofTickets > 0)
	{
		amountOwed = priceOneTicket * numberofTickets;
		cout << "You owe $ " << amountOwed << endl;
		cout << "How much will you pay? ";
		cin >> amountPayed;
		change = amountPayed - amountOwed;
			if (change > 0)
			{
			cout << "You will get $ " << change << " in change." << endl;
			cout << "Your tickets have been ordered!" << endl;
			}		
			else 
			{	
			cout << "This is too little! No tickets ordered." << endl;
			return 0;
			}		
	}
	else	
	{
		cout << "The number of tickets ordered is invalid and your order has been canceled." << endl;
		return 0;
	}
		
return 0;
}

