#include<iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	float voltage, current;	
	cout << "Enter your name sir: ";
	getline (cin, name);
	cout << "Enter a voltage value: ";
	cin >> voltage ;
	cout << "Enter a current value: ";
	cin >> current ;	
	cout << "Your name is: " << name << ".\n" ;
	cout << "Your resistance value is " << voltage/current << " Ohms" << ".\n" ;
	cout << "Your power value is " << voltage*current << " Watts" << ".\n";
	
	cout << "Name		|R(Ohms)	|P(Watts)" << ".\n";
	cout << name << "		" << voltage/current <<"		" << voltage*current ;
	return 0;
}
