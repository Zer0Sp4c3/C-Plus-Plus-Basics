#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::srand;
using std::time;

int main()
{
	int Selection = 0, Attempts = 3;
	float Num1 = 0.0, Num2 = 0.0, Guess = 0.0, Answer = 0.0;
	

	while (Selection != 9)
	{
		Selection = 0;
		Attempts = 3;
		cout << "Please choose an option using a number" << endl;
		cout << "If you'd like to use addition, press 1" << endl;
		cout << "If you'd like to do subtraction, press 2" << endl;
		cout << "If you'd like to do multiplication, press 3" << endl;
		cout << "If you'd like to do division, press 4" << endl;
		cout << "To end the program, press 9" << endl;
		cin >> Selection;

		//All selections have the same code
		//The user can pick and will have to do the math problem shown

		if (Selection == 1)
		{
			while (Attempts > 0)
			{
				srand(time(NULL));
				//Uses system time to randomize seeds for numbers

				Num1 = rand() % 250 + 250; //rand() function generates a number between 250-499
				Num2 = rand() % 250; //rand() generates a number between 0-249
				Answer = Num1 + Num2;
				cout << Num1 << " + " << Num2 << " = ?" << endl;
				cin >> Guess;
				
				if (Guess != Answer)
				{
					cout << "Wrong" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
				}

				if (Answer == Guess)
				{
					cout << "Correct!" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
					Attempts--;
					Attempts--;
				}   //Decrements Attempts to 0 to end the program
			}
		}
		else if (Selection == 2)
		{
			while (Attempts > 0)
			{
				srand(time(NULL));
				
				Num1 = rand() % 250 + 1; //Generates a number between 1-250
				Num2 = rand() % 250; //Generates a number between 0-249
				Answer = Num1 - Num2;
				cout << Num1 << " - " << Num2 << " = ?" << endl;
				cin >> Guess;
				
				if (Guess != Answer)
				{
					cout << "Wrong" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
				}

				if (Answer == Guess)
				{
					cout << "Correct!" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
					Attempts--;
					Attempts--;
				}
			}
		}
		else if (Selection == 3)
		{
			while (Attempts > 0)
			{
				srand(time(NULL));
				
				Num1 = rand() % 100 + 1; //Generates a number between 1-100
				Num2 = rand() % 100; //Generates a number between 0-99
				Answer = Num1 * Num2;
				cout << Num1 << " * " << Num2 << " = ?" << endl;
				cin >> Guess;
				
				if (Guess != Answer)
				{
					cout << "Wrong" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
				}

				if (Answer == Guess)
				{
					cout << "Correct!" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
					Attempts--;
					Attempts--;
				}
			}
		}
		else if (Selection == 4)
		{
			while (Attempts > 0)
			{
				srand(time(NULL));
				
				Num1 = rand() % 50 + 50; //Generates a number between 50-99
				Num2 = rand() % 50 + 1; //Generates a number between 1-50
				Answer = static_cast<float>(Num1) / Num2;
				cout << Num1 << " / " << Num2 << " = ?" << endl;
				cin >> Guess;

				Guess = std::round(Guess * 100) / 100;
				Answer = std::round(Answer * 100) / 100;
				
				if (Guess != Answer)
				{
					cout << "Wrong" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
				}

				if (Answer == Guess)
				{
					cout << "Correct!" << endl;
					cout << "Answer is: " << Answer << endl;
					Attempts--;
					Attempts--;
					Attempts--;
				}
			}
		}
		else if (Selection == 9)
		{
			cout << "Thank you for expanding your brain" << endl;
			return 0;
		}
	}
}