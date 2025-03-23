#pragma once
#include<iostream>
using namespace std;

class Sleep {
public:
	Sleep();			//default constructor
	Sleep(int, int);	//constructor
	void printSleep();

private:
	int hours;
	int minutes;
};

Sleep::Sleep() { hours = 0; minutes = 0; } // default

Sleep::Sleep(int hours, int minutes) {
	// Set the object hours and minutes
	// using the passed parameters hours and minutes
	// The object variables are this-> 
	this->hours = hours; 
	this->minutes = minutes;
}

void Sleep::printSleep() {

	cout << "Sleep hours: " << hours << " minutes: " << minutes << endl;
}

