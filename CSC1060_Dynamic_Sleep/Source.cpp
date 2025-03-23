//8.4.1: Dynamically allocating a Sleep object.
// Example code
// Modified to include print
// Kathy Geise
// Date 3/23/25

#include<iostream>
#include "Sleep.h"

using namespace std;

int main() {
	int h = 7;
	int m = 30;

	// Create a Sleep object using default constructor
	Sleep* sleepRecord;
	sleepRecord = new Sleep;

	// Create a Sleep object using passed parameters
	Sleep* mySleepRecord;
	mySleepRecord = new Sleep(h, m);

	// Call printSleep() using pointer
	sleepRecord->printSleep();

	// Dereference the pointer, then call printSleep()
	(*mySleepRecord).printSleep();

	return 0;
}
