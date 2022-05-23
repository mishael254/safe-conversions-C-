// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	cout << "Please input the value of A \n";
	int a ;
	cin >> a;
	
	char c = a;
	int b = c;


	if (a != b) {
		cout << "The value of a and b are not the same" << endl << "a== " << a << endl << "b == " << b << endl;
	}
	else {
		cout << "The value of a and b are the same" <<endl<< "a == " << a << endl << "b == " << b << endl;
	}
	return 0;
}