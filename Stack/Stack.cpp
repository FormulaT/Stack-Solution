/**
 * Description: Function definitions for member functions of Stack class
 * Author: Thabani Takwena 402102980 
 */

#include "Stack.h"
#include <iostream>

void Stack::push(const char* plateID)
{
	Plate* newLastPlate = new Plate();
	newLastPlate->plateID = plateID;

	if (lastPlate == nullptr) // Checking if stack is empty
	{
		newLastPlate->nextPlate = nullptr;
	}
	else
	{
		newLastPlate->nextPlate = lastPlate;
	}

	lastPlate = newLastPlate;

	std::cout << plateID << " has been added to the stack.\n";
}

void Stack::pop()
{
	if (lastPlate == nullptr)
	{
		std::cout << "There are no more plates to remove. The stack is empty.\n";
	}
	else
	{
		Plate* temp = lastPlate;
		lastPlate = temp->nextPlate;

		delete temp;

		std::cout << "Last plate has been remove from the stack.\n";
	}
}

void Stack::peek()
{
	if (lastPlate == nullptr)
	{
		std::cout << "Cannot look at last plate. The stack is empty.\n\n";
	}
	else
	{
		std::cout << "Current last plate is plate number: " << lastPlate->plateID << "\n\n";
	}
}

bool Stack::isEmpty()
{
	return (lastPlate == nullptr);
}

int Stack::size()
{
	int size = 0;

	Plate* currentPlate = lastPlate;

	while (currentPlate != nullptr)
	{
		size += 1;
		currentPlate = currentPlate->nextPlate;
	}

	return size;
}