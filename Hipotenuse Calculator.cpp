//This program is to calculate de hipotenus of a rectangular triangle usin the Pythagoran Theorem.
//(a^2+b^2=c^2)
//Author: Felix X. Pagan Gonzalez

#include <iostream>
#include <cmath> //Math function for complex numbers.
using namespace std;

float oposite;

float adjacent;

float hipotenuse;

int main()
{

	cout << "Enter the value of the angle's oposite side:";

	cin >> oposite;  //First value input.
	
	cout << "Enter the value of the angle's adjacent side:";
	
	cin >> adjacent; //Seconf value input.
	
	oposite=pow(oposite,2); //Using the "pow(x,y)" we can elevate a number "x" to the power "y".
	
	adjacent=pow(adjacent,2);
	
	hipotenuse=oposite+adjacent; //Using the "+" symbol we can perform the sum of to values.
	
	hipotenuse=sqrt(hipotenuse); //Using the "sqrt(x)" command, we can find the square root of "x" value.
	
	cout << "The value of the hipotenuse is: " << hipotenuse << endl; //Output the desire value.
	
	return 0;
}	
