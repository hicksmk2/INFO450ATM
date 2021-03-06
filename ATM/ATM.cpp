/* 
ATM.cpp : Defines the entry point for the console application.
Author: Malik Hicks
*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char answer = 'Y';
	double withdraw = 0;
	int balance, Fifties, Twenties, Tens, Fives, Ones;

	cout << "Greetings User!"  << endl << endl;
	cout << "We see that you are looking to withdraw from this machine. Let us begin!" << endl;
	cout << "" << endl;
	cout << "***** Your withdrawal must be at least $1 and no more than $300 *****" << endl;
	cout << "========================================================" << endl;

	while (answer == 'Y' || answer == 'y')								// Initiates a while loop to verify user selection to withdraw more funds after the initial withdrawal.
	{
		do
		{
			cout << "Please enter the amount you wish to withdraw: $";	
			cin >> withdraw;
			cout << "" << endl;

			if (withdraw <= 300 && withdraw >= 1)						// Checks whether the user's value to withdraw is above or below the min/max.
			{
				cout << "You've chosen to withdraw $" << withdraw << endl;
				cout << "" << endl;

				Fifties = withdraw / 50;										// Calculates the amount of dollars dispense based on user's desired value to withdraw.
				balance = withdraw - (Fifties * 50);
				Twenties = balance / 20;
				balance = balance - (Twenties * 20);
				Tens = balance / 10;
				balance = balance - (Tens * 10);
				Fives = balance / 5;
				balance = balance - (Fives * 5);
				Ones = balance / 1;
				balance = balance - (Ones * 1);

				cout << "Your withdrawl then breaks down to: " << endl << endl;;
				cout << "\t =======================";

				if (Fifties >= 1)														// Cycles through each type of bill and outputs the amount of bills if the value exceeds 0
				{
					cout << "\n\t Number of $50 bills: " << Fifties;
				}

				if (Twenties >= 1)
				{
					cout << "\n\t Number of $20 bills: " << Twenties;
				}

				if (Tens >= 1)
				{
					cout << "\n\t Number of $10 bills: " << Tens;
				}

				if (Fives >= 1)
				{
					cout << "\n\t Number of $5 bills: " << Fives;
				}

				if (Ones >= 1)
				{
					cout << "\n\t Number of $1 bills: " << Ones;
				}
				cout << "\n\t =======================" << endl;
			}
			else
			{
				cout << "Invalid amount entered.  The min is $1.00 & the max is $300.00.  Please try again" << endl;
				cout << "" << endl;

			}

			
		}

		while (withdraw == 0);

		cout << endl;
			cout << "Would you like to withdraw more? Enter Y to continue ---> ";			// Asks the user to make a selection on whether to do another transaction
			cin >> answer;
			cout << "========================================================" << endl;

	} 

	cout << "" << endl;
	cout << "Ending your transaction!  Thank you and have a nice day ^.^" << endl;			// Exits the program if 'y' or 'Y' isn't entered
	cout << endl;

	return 0;
}
