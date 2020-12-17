#include "../../headers/stdafx.h" //Using <iostream> from stdafx.h
using namespace std;

int main() {
	//variable initialization
	int a = 0;
	int b = 0;

	//get user values for variables
	cout << "Please enter a value for a:";
	cin >> a;
	cout << "Please enter a value for b:";
	cin >> b;

	//thank the user
	cout << "Thank you kindly, good user!" << endl;

	//add the variables
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "a+b=" << a + b << endl;
	cout << endl;

	//reference the variables
	int &c = a;
	int &d = b;

	cout << "&c=a. c=" << c << endl;
	cout << "&d=b. d=" << d << endl;
	cout << "c+d=" << c+d << endl;
	cout << endl;

	return 0;
}