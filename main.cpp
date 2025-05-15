#include "Vectors.h"
#include <iostream>

int main()
{
	vec2 vec2 = { 2.0f, 100.0f };
	vec3 vec3 = { 1.0f, 50.0f, 600.0f };

	std::cout << "The vec2 is made up of:\nx: " << vec2.x << "\ny " << vec2.y << "\n\n";
	std::cout << "The vec3 is made up of:\nx: " << vec3.x << "\ny " << vec3.y << "\nz " << vec3.z << "\n";

	return 0;
}