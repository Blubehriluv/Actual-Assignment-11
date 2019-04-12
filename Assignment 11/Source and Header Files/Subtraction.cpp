#include "CalculatorManage.h"
#include <iostream>
#include <string>

using namespace std;
//Holder for the difference.
int diff;

//Function for subtraction that takes two values
void subtraction(int x, int y)
{
	//The actual math happens here
	diff = x - y;
	//The math is printed in a readable form.
	cout << x << " - " << y << " = " << diff << endl;
	system("Pause");
	cout << "\n";

	//The user can do another calculation.
	again();
}