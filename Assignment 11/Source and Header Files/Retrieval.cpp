#include "CalculatorManage.h"
#include <iostream>
#include <string>

using namespace std;

void main()
{
	//Change the color.
	system("color 0b");
	cout << "Welcome to Taylor's M.A.D.S Calculator!" << endl;
	cout << "Multiplication, Addition, Division, & Subtraction" << endl;
	cout << "\nType exit at the operand to leave the calculator." << endl;
	system("Pause");

	//Made a function for the calculator beginning so that it can run again and again.
	again();
}