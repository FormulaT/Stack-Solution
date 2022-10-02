/**
 * Description: Stack class and member functions declarations
 * Author: Thabani Takwena 402102980
 */

#pragma once
#include <iostream>

struct Plate
{
	std::string plateID;
	Plate* nextPlate;
};

class Stack
{
public:
	Plate* lastPlate; // last item on the stack

	// Constructor: initializes above pointer
	Stack() : lastPlate(nullptr) {}

	// Member functions below

	void push(const char* plateID); // Adds an item to the stack
	void pop(); // Removes last item on the stack
	void peek(); // Looks at the last item on the stack
	bool isEmpty(); // Tells whether the stack is empty or not (True or False)
	int size(); // Retruns the number of items in the stack
};