#include "CalculatorManage.h"
#include <iostream>
#include <string>

using namespace std;

//Variables to hold the user's answers
int x;
int y;
string chosenOp;

//Function to start the calculator
void again()
{
	//Player inputs first number
	cout << "\nPlease, enter the first number." << endl;
	cin >> x;
	//User chooses an operator.
	cout << "\nChoose an operator." << endl;
	cout << "Add, Subtract, Multiply, Divide, Exit." << endl;
	cin >> chosenOp;
	
	//Allows the user to exit
	if (chosenOp == "exit" || chosenOp == "exit")
	{
		cout << "Thank you!" << endl;
		system("Pause");
		return;
	}

	//User inputs the last number
	cout << "\nPlease, enter the last number." << endl;
	cin >> y;
	cout << "\n\n";

	//Depending on the user choice of operator
	//That choice will be called to be used
	//The two numbers will be passed along to it
	if (chosenOp == "add" || chosenOp == "Add")
	{
		addition(x, y);
	}
	if (chosenOp == "subtract" || chosenOp == "Subtract")
	{
		subtraction(x, y);
	}
	if (chosenOp == "multiply" || chosenOp == "Multiply")
	{
		multiplication(x, y);
	}
	if (chosenOp == "divide" || chosenOp == "Divide")
	{
		division(x, y);
	}
	//This allows the user to exit the application
	else
	{
		return;
	}
}