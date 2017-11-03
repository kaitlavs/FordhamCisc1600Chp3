// Kaitlyn Lavan
// October 13, 2017
// code to find a specific number using a fr loop

#include <iostream>
using namespace std;

int main()
{

	//variables
	int num, units, tens, hundreds, thousands;

	//procoessing
	for (num=1000;num <= 9999;num++)
	{
	//check for odd #s
		if ((num%2) == 0)
			continue;

	//10s 3x greater than 1000s
		units = num % 10;
		tens = num / 10 % 10;
		hundreds = num / 100 % 10;
		thousands = num / 1000 % 10;
		if (thousands != (3 * tens))
			continue;
	
	//all four digits are different 
		if (thousands != hundreds && thousands != tens && thousands != units && hundreds != tens && hundreds != units && tens != units)
		{
			//digits add up to 27
			if (((thousands + hundreds + tens + units) == 27))
			{
				cout << "The address is " << num << ", Pennsylvania Avenue" << endl;
			}
		}	
	}

return 0;
}
