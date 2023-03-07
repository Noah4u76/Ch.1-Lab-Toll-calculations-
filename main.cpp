//
// File: main.cpp
// Description: Toll calculations
// Created: Sun. Feb 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include <iostream>
#include <iomanip>
using namespace std;

double CalcToll(int time, bool morning, bool weekend) {
	double price;
	if (not morning)
		time = time + 12;
	if (weekend){
		if (time >= 0 && time < 7){
			price = 1.05;
		}	
		if (time >= 7 && time < 20){
			price = 2.15;
		}
		if(time >= 20 && time < 24){
			price = 1.10;
		}
	}
	else{
		if (time >= 0 && time < 7){
			price = 1.15;
		}	
		if (time >= 7 && time < 10){
			price = 2.95;
		}
		if(time >= 10 && time < 15){
			price = 1.90;
		}
		if (time >= 15 && time < 20){
			price = 3.95;
		}
		if(time >= 20 && time < 24){
			price = 1.40;
		}
	}	
    return price;
}

int main() {
	cout << CalcToll(8, true, false) << endl;   // 2.95
	cout << CalcToll(1, false, false) << endl;  // 1.9
	cout << CalcToll(3, false, true) << endl;   // 2.15
	cout << CalcToll(5, true, true) << endl;    // 1.05

	return 0;
}