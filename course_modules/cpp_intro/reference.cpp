#include <iostream>
#include <vector>
#include "func.h"

int main()
{
	std::string name = "Gabriel";

	std::cout << name << std::endl;

	std::string player1 = "One";

	func(player1);

	std::cout << player1 << std::endl;

	return 0;
}