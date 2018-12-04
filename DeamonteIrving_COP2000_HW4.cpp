//Deamonte Irving
//COP2000
//HW4
//November 6th, 2018


#include <iostream>
#include <string>
using namespace std;

//function prototypes
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
void welcome();
void raceAverage(double, double, double);



int main()
{
	//variables
	string racerNum1, racerNum2, racerNum3, racer_names;
	double timeNum1, timeNum2, timeNum3, racer_times, result;

	//calling the functions
	welcome();
	getRaceTimes(racerNum1, timeNum1);
	getRaceTimes(racerNum2, timeNum2);
	getRaceTimes(racerNum3, timeNum3);
	findWinner(racerNum1, racerNum2, racerNum3, timeNum1, timeNum2, timeNum3);
	raceAverage(timeNum1, timeNum2, timeNum3);

	system("pause");
	return 0;

}






//this function finds the winner
void findWinner(string racerNum1, string racerNum2, string racerNum3, double timeNum1, double timeNum2, double timeNum3)
{
	if ((timeNum1 < timeNum2) && (timeNum1 < timeNum3))
	{
		cout << "Hooray" << " " << racerNum1 << "!! " << "You have the lowest score!\n" << endl;
		cout << "***** Your winning time is:  " << timeNum1 << " *****\n" << endl;
	}
	if ((timeNum2 < timeNum1) && (timeNum2 < timeNum3))
	{
		cout << "Hooray" << " " << racerNum2 << "!! " << "You have the lowest score!\n" << endl;
		cout << "***** Your winning time is:  " << timeNum2 << " *****\n" << endl;
	}
	if ((timeNum3 < timeNum1) && (timeNum3 < timeNum2))
	{
		cout << "Hooray" << " " << racerNum3 << "!! " << "You have the lowest score!\n" << endl;
		cout << "***** Your winning time is:  " << timeNum3 << " *****\n" << endl;
	}
	if ((timeNum2 < timeNum1) && (timeNum2 == timeNum3))
	{
		cout << "Hooray" << " " << racerNum2 << " " << "and" << " " << racerNum3 << " " << "you are the winners!" << endl;
		cout << "***** Your winning time is:  " << timeNum2 << " *****\n" << endl;
	}
	if ((timeNum3 < timeNum2) && (timeNum3 == timeNum1))
	{
		cout << "Hooray" << " " << racerNum1 << " " << "and" << " " << racerNum3 << " " << "you are the winners! " << endl;
		cout << "***** Your winning time is:  " << timeNum1 << " *****\n" << endl;
	}
	if ((timeNum2 < timeNum3) && (timeNum2 == timeNum1))
	{
		cout << "We have TIE " << " " << racerNum1 << " " << "and" << " " << racerNum2 << " " << "win!!" << endl;
		cout << "***** Your winning time is:  " << timeNum1 << " *****\n" << endl;
	}
	if ((timeNum1 == timeNum2) && (timeNum1 == timeNum3))
	{
		cout << "We have a 3 way TIE!!! Congratulation Racers!!!" << endl;
		cout << "\n";
	}
}


//introduction welcoming function
void welcome()
{
	cout << "Welcome to Race Results Progam\n";
	cout << "You are asked to Enter the Three Racer's Names\n";
	cout << "and Their Associated Race Time.\n";
	cout << "\n";
	cout << "Please enter a real number for Race Time (the Race Time must be > 0).\n";
	cout << "\n";
	cout << "Program Developed by: Deamonte Irving\n";
	cout << "************************************************************************\n";
	cout << "\n";
}

//this function gathers user input
void getRaceTimes(string &racer_names, double &racer_times)

{
	cout << "Please enter the racer's first name > "; cin >> racer_names;
	cout << "\n";
	cout << "Please enter the racer's time > "; cin >> racer_times;
	cout << "\n";
	while (racer_times <= 0)
	{
		cout << "Invalid time input...time must be greater than 0";
		cin >> racer_times;
	}
}

//this function finds average time of each racer.
void raceAverage(double timeNum1, double timeNum2, double timeNum3)
{
	cout << "Overall Race Time Average:  " << ((timeNum1 + timeNum2 + timeNum3) / 3) << "\n" << endl;
	return;
}