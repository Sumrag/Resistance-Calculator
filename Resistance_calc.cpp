// resistance reader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std; 


int _tmain(int argc, _TCHAR* argv[])
{

	string color_band_1, color_band_2,Multiplier; 
	
	int first_digit,second_digit;
	double multiple; 
	
	cout << "Color of first band:" << endl ;

	cin >> color_band_1 ; 

	if (color_band_1 == "black")
	
		first_digit = 0; 	 
	
	if (color_band_1 == "brown")
	
		first_digit = 1; 

	if (color_band_1 == "red")
	
		first_digit = 2; 

	if (color_band_1 == "orange")
	
		first_digit = 3;  
	
	if (color_band_1 == "yellow")
	
		first_digit = 4; 
	
	if (color_band_1 == "green")
	
		first_digit = 5; 

	if (color_band_1 == "blue")
	
		first_digit = 6;

	if (color_band_1 == "violet")
	
		first_digit  = 7;

	if (color_band_1 == "grey")
	
		first_digit = 8; 

	if (color_band_1 == "white")
	
		first_digit = 9; 

	cout << "Color of second band:"<<endl;

	cin >> color_band_2; 
 

	if (color_band_2 == "black")
	
		second_digit = 0; 
	
	if (color_band_2 == "brown")
	
		second_digit = 1; 

	if (color_band_2 == "red")
	
		second_digit = 2; 

	if (color_band_2 == "orange")
	
		second_digit = 3; 
	
	if (color_band_2 == "yellow")
	
		second_digit = 4; 
	
	if (color_band_2 == "green")
	
		second_digit = 5; 

	if (color_band_2 == "blue")
	
		second_digit = 6; 

	if (color_band_2 == "violet")
	
		second_digit = 7; 

	if (color_band_2 == "grey")
	
		second_digit = 8; 

	if (color_band_2 == "white")
	
		second_digit = 9; 

	cout << "Color of third band:" << endl ;

	cin >> Multiplier ; 


	if (Multiplier == "black")
	
		multiple = 1; 

	if (Multiplier == "brown")
	
		multiple = 10;  

	if (Multiplier == "red")
	
		multiple = 100;  

	if (Multiplier == "orange")
	
		multiple = 1000;  
	
	if (Multiplier == "yellow")
	
		multiple = 10000;  
	
	if (Multiplier == "green")
	
		multiple = 100000;  

	if (Multiplier == "blue")
	
		multiple = 1000000;  

	if (Multiplier == "violet")
	
		multiple = 10000000;  

	if (Multiplier == "gold")

		multiple = .1;  

	if (Multiplier == "silver")

		multiple = .01;  
	
	if (second_digit == 0) 

	cout << first_digit*multiple << second_digit << endl; 

	else 
		cout << first_digit << second_digit*multiple<< endl; 




	return 0;
}

