#include "Stack.h"

// Function definitions for the stack member functions

void Stack::push(int plateNumber)
{
	Plate* newLastPlate = new Plate();
	newLastPlate->plateNumber = plateNumber;

	if (lastPlate == nullptr)
	{
		lastPlate = newLastPlate;
	}
}