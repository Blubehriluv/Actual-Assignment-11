#include "CalculatorManage.h"
#include <iostream>
#include <string>

using namespace std;
//Holder for the sum.
int sum;

//Function for addition that takes two values
void addition(int x, int y)
{
	//The actual math happens here
	sum = x + y;
	//The math is printed in a readable form.
	cout << x << " + " << y << " = " << sum << endl;
	system("Pause");
	cout << "\n";
	
	//The user can do another calculation.
	again();
}