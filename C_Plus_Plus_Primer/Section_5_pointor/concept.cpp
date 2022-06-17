#include <iostream>
#include <cmath>
#include <stdio.h>
#include <typeinfo>
using namespace std;

int main()
{
	/*-----------concept 1 -------------*/
	// char str[] = "NBA", *p = str;
	// bool flag_not_done = true;
	// while (flag_not_done)
	// {
	// 	int num ;
	//     cout << "Please input the number from 0,1,2 : ";
	//     cin >> num ;
	// 	if (num <= 2 && num >=0){
	// 		printf("%s%d%s%c\n","The char of ", num, " of the string about NBA is ", *(p+num));

	// 		flag_not_done = false;
	// 	}
	// }

    /*-----------concept 2 -------------*/
	char a[] = "language";
	char *ptr1 = a;
	while (*ptr1){
		cout << char(*ptr1 - 32);
		ptr1++;
	}
	cout << endl;

	char *ptr2 = a;
	while (*ptr2){
		cout << typeid(*ptr2-32).name() << "  ";
		ptr2++;
	}
	cout << endl;

	char *ptr3 = a;
	while (*ptr3){
		cout << *ptr3;
		ptr3++;
	}
	cout << endl;







	
	return 0;
}