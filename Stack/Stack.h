#pragma once

struct Plate
{
	int plateNumber;
	Plate* nextPlate;

	// Constructor: initialozes above variables
	Plate() : plateNumber(0), nextPlate(nullptr) {};
};

class Stack
{
public:
	Plate* lastPlate; // last item on the stack

	// Constructor: inilializes above pointer
	Stack() : lastPlate(nullptr) {}

	// Member functions below

	void push(int plateNumber); // Adds an item to the stack
	void pop(); // Removes last item on the stack
	void peek(); // Looks at the last item on the stack
	bool isEmpty(); // Tells whether the stack is empty or not (True or False)
	int size(); // Retruns the number of items in the stack
};

