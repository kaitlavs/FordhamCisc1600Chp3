// Kaitlyn Lavan
// October 6, 2017
// 4 function calculation code

#include <iostream>
using namespace std;

int main()
{

	// variables
	int num1, num2, answer;
	char ops;
	bool moreProcessing;

	// init (always init counters, or totals)
	moreProcessing = true;

	// processing
	while (moreProcessing == true)
	{
		// input
		cout << " Enter equation or 0 x 0 to exit : ";
		cin >> num1 >> ops >> num2;

		switch (ops)
		{	
	   		case 'x':
				if (num1 == 0 && num2 == 0)
				{
					moreProcessing = false;
				}
				else
				{		
					answer = num1 * num2;
					cout << num1 << "  " << ops << "  " << num2 << "  = " << answer << endl;
				}	  
 			break;
		
			case '+':
				if (num1 == 0 && num2 == 0)
				{
					moreProcessing = false;
				}
				else 
				{
					answer = num1 + num2;
					cout << num1 << "  " << ops << "  " << num2 << "  = " << answer << endl;
				}
			break;

			case '-':
				if (num1 == 0 && num2 == 0)
				{
					moreProcessing = false;
				}
				else 
				{ 
					answer = num1 - num2;
					cout << num1 << "  " << ops << "  " << num2 << "  = " << answer << endl;
				}				
			break;
	
			case '/':
				if (num1 == 0 && num2 ==0)
				{
					moreProcessing = false;
				}
				else 
				{ 
					if (num1 != 0 &&  num2 == 0)
					{
						cout << "Error -- cannot divide by 0" << endl;
					}
					else 
					{ 	  
	
						answer = num1 / num2;
						cout << num1 << "  " << ops << "  " << num2 << "   = " << answer << endl;
					}
				}	
		}      // end switch
	} // end while

cout << "Have a nice day!" << endl;
	
return 0;
}
