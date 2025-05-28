#include "Vectors.h"
#include <iostream>

int main()
{
	vec2 right = { 2.0f, 100.0f };
	vec3 left = { 1.0f, 50.0f, 600.0f };

	std::cout << "Vec2\n\n\nThe vec2 is made up of:\nx: " << right.x << "\ny " << right.y << "\n\n";
	std::cout << "The vec3 is made up of:\nx: " << left.x << "\ny " << left.y << "\nz " << left.z << "\n\n\n";

	vec2 testVec = { 1.0f, 200.0f};
	vec2 result = right + testVec;

	std::cout << "the result of adding is: " << result.x << " " << result.y << "\n\n\n";

	result = { 0.0f,0.0f };

	result = right - testVec;

	std::cout << "the result of subtracting is: " << result.x << " " << result.y << "\n\n\n";

	result = { 0.0f,0.0f };

	result = right * testVec;

	std::cout << "the result of multiplying by a vector is: " << result.x << " " << result.y << "\n\n\n";

	result = { 0.0f,0.0f };

	result = right * 2;

	std::cout << "the result of multiplying by a scalar is: " << result.x << " " << result.y << "\n\n\nVec3\n\n\n";

	vec3 testVec3 = { 1.0f, 200.0f, 300.0f };
	vec3 result3 = left + testVec3;

	std::cout << "the result of adding is: " << result3.x << " " << result3.y << " " << result3.z << "\n\n\n";

	result3 = { 0.0f,0.0f,0.0f };

	result3 = left - testVec3;

	std::cout << "the result of subtracting is: " << result3.x << " " << result3.y << " " << result3.z << "\n\n\n";

	result3 = { 0.0f,0.0f,0.0f };

	result3 = left * testVec3;

	std::cout << "the result of multiplying by a vector is: " << result3.x << " " << result3.y << " " << result3.z << "\n\n\n";

	result3 = { 0.0f,0.0f,0.0f };

	result3 = left * 2;

	std::cout << "the result of multiplying by a scalar is: " << result3.x << " " << result3.y << " " << result3.z << "\n\n\n";

	return 0;
}