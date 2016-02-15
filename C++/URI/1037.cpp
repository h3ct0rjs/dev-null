/*
You must make a program that read a float-point number and
print a message saying in which of following intervals the number
belongs: [0,25] (25,50], (50,75], (75,100].
If the read number is less than zero or greather than 100,
the program must print the message “Fora de intervalo” that means
"Out of Interval".
The symbol '(' represents greather than. For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.

Input
The input file contains a floating-point number.

Output
The output must be a message like following example.

*/
#include <bits/stdc++.h>
#define fast ios_base::std ; cin.tie(NULL)

using namespace std;

int main() {
	float value;
	cin>>value;
	if((value<0) || (value>100))
		cout<<"Fora de intervalo"<<endl;
	else if((value >0) && (value<=25))
		cout<<"Intervalo [0,25]"<<endl;
	else if( (value>25) && (value<=50))
		cout<<"Intervalo (25,50]"<<endl;
	else if( (value>50) && (value<=75))
		cout<<"Intervalo (50,75]"<<endl;
	else if( (value>75) && (value<=100))
		cout<<"Intervalo (75,100]"<<endl;
	return 0;
}

