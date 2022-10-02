/**
 * Description: Entry point of program. Practical use of the Stack classs  here
 * Author: Thabani Takwena 402102980
 */

#include "Stack.h"
#include <iostream>

int main()
{
	// Cabinet: this is where the plates will be stacked
	Stack cabinet;

	// Adding plates to the stack
	cabinet.push("plate1");
	cabinet.push("plate2");
	cabinet.push("plate3");
	cabinet.push("plate4");
	cabinet.push("plate5");

	if (cabinet.isEmpty())
	{
		std::cout << "\nCabinet is empty.\n";
	}
	else
	{
		std::cout << "\nThere are some plates in the cabinet.\n\n";
	}

	// Displayinng size of cabinet and last plate on the stack
	std::cout << "number of plates in the cabinet: " << cabinet.size() << "\n";
	cabinet.peek();

	// Removing 2 plates from the cabinet
	cabinet.pop();
	cabinet.pop();
	std::cout << "number of plates in the cabinet: " << cabinet.size() << "\n";
	cabinet.peek();

	// Removing the rest of the plates in the cabinet
	cabinet.pop();
	cabinet.pop();
	cabinet.pop();
	std::cout << "number of plates in the cabinet: " << cabinet.size() << "\n";
	cabinet.peek();

	cabinet.pop(); // for good measure

	system("pause>0");

	return 0;
}