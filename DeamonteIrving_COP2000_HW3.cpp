//Deamonte Irving
//COP2000
//HW3
//10/23/2018

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	const float GOLD_INCREASE = 0.01;										//gold membership
	const float SILVER_INCREASE = 0.02;										//silver membership
	const float BRONZE_INCREASE = 0.04;										//bronze membership
	float principle = 1200;													//gym annual fee
	const int years = 10;													//years
	int membership_choice;													//menu selection
	

	//menu for calculator
	
	do
	{
		cout << endl;
		cout << "Welcome to Rhonda's Strikeforce Gym!" << endl;
		cout << "-----------------------------------" << endl;
		cout << "	Membership Fee Calculator" << endl;
		cout << "1. Gold" << endl;
		cout << "2. Silver" << endl;
		cout << "3. Bronze" << endl;
		cout << "4. Quit\n" << endl;
		cout << "Please enter your membership level (1-3 enter 4 to quit)"; cout << ">";  cin >> membership_choice;
		while (membership_choice < 1 || membership_choice > 4)
		{
			cout << "Please try again";										//input validation
			cin >> membership_choice;
		}

		switch (membership_choice)
		{
		case 1:
			for (int i = 1; i <= years; i++)
			{
				principle = principle + (principle * GOLD_INCREASE);
				cout << setw(5) << setprecision(2) << fixed << showpoint << "Year " << i << "  $" << principle << endl;
			}
			break;

		case 2:
			for (int l = 1; l <= years; l++)
			{
				principle = principle + (principle * SILVER_INCREASE);
				cout << setprecision(2) << fixed << "Year " << l << "  $" << principle << endl;
			}
			break;

		case 3:
			for (int i = 1; i <= years; i++)
			{
				principle = principle + (principle * BRONZE_INCREASE);
				cout << setprecision(2) << fixed << "Year " << i << "  $" << principle << endl;
			}
			break;

		default:
			cout << "Thank you for using Rhonda's Fee Calculator!" << endl;
			;



		}

		

		
	} while (membership_choice != 4);
	
	system("pause");
	return 0;
	
}
	
	
	








