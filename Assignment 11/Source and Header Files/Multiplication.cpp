#include "CalculatorManage.h"
#include <iostream>
#include <string>

using namespace std;
//Holder for the product.
int prod;

//Function for multiplication that takes two values
void multiplication(int x, int y)
{
	//The actual math happens here.
	prod = x * y;
	//The math is printed in a readable form.
	cout << x << " * " << y << " = " << prod << endl;
	system("Pause");
	cout << "\n";

	//The user can do another calculation.
	again();
}