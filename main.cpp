#include "vectors.h"
#include <iostream>

int main()
{
	vec3 right = { 1.0f, 50.0f, 600.0f };
	std::cout << "Component 0: " << right.x << "\n";
	std::cout << "Component 0: " << right.asArray[0] << "\n";
	std::cout << "Component 0: " << right[0] << "\n";
	std::cout << "Component 1: " << right.y << "\n";
	std::cout << "Component 1: " << right.asArray[1] << "\n";
	std::cout << "Component 1: " << right[1] << "\n";
	std::cout << "Component 2: " << right.z << "\n";
	std::cout << "Component 2: " << right.asArray[2] << "\n";
	std::cout << "Component 2: " << right[2] << "\n";
	std::cin.get();

	return 0;
}