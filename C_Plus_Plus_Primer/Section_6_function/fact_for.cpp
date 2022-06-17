#include<iostream>
using namespace std;

#define int_MAX 2147483647

int fact(int val)
{
	if (val < 0)
		return -1;
	int ret = 1; // from 1 multiple to val

	for (int i = 1; i !=val + 1; ++i)
	{
		if (ret < (int_MAX/i))
			ret *= i;
		else return -1;
	}

	return ret;
}

int main()
{
	int n;
	cout << "Please input the n : ";
	cin >> n ;
	if (fact(n)!=-1)
		cout << "The result of fact n is :" << fact(n) << "\n";
	else
		cout << "The number n is out of range, it should less than 16 or bigger than -1.\n";
	return 0;
}