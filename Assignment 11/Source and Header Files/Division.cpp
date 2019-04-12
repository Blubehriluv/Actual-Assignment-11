#include "CalculatorManage.h"
#include <iostream>
#include <string>

using namespace std;
//Holder for the quotient.
int quote;

//Function for division that takes two values.
void division(int x, int y)
{
	//The actual math happens here.
	quote = x / y;
	//The math is printed in a readable form.
	cout << x << " / " << y << " = " << quote << endl;
	system("Pause");
	cout << "\n";
	
	//The user can do another calculation.
	again();
}