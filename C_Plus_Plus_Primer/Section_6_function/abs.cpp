#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

double myABS(double val)
{
	if (val < 0)
		return val * -1;
	else
		return val;
}

double myABS2(double val)
{
	return abs(val);
}

int main()
{
	double num;
	cout << "Please input the real number : ";
	cin >> num ;
	printf("The absolute value is :%.15f\n", myABS(num));
	printf("The absolute value is :%e\n", myABS2(num)); 
	printf("The absolute value is :%g\n\n", myABS2(num)); 

    printf("Some example about the error of -32245.34412742727:\n");
	printf("The absolute value is :%.15f\n", -32245.34412742727);
	printf("The absolute value is :%e\n", -32245.34412742727); 
	printf("The absolute value is :%g\n", -32245.34412742727);
	return 0;
}