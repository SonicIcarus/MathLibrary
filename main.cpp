#include "Vectors.h"
#include <iostream>

int main()
{
	vec3 right = { 1.0f, 50.0f, 600.0f };

	vec3 left = { 2.0f, 25.0f, -200.0f };
	std::cout << "vec1: " << right << "\nvec2: " << left << "\n";

	float scalar = 3.0f;

	// vec3 arithmetic3D = right * scalar;
	// std::cout << "arithmetic3D: " << arithmetic3D << "\n";

	// float magnitudeRight = MagnitudeSq(right);
	// std::cout << "RightMagnitude: " << magnitudeRight << "\n";
	// float magnitudeLeft = MagnitudeSq(left);
	// std::cout << "LeftMagnitude: " << magnitudeLeft << "\n";

	// float distance = DistanceSq(right, left);
	// std::cout << "Distance between: " << distance << "\n";

	// float dotProduct = Dot(right, left);
	// std::cout << "The 3D dot product: " << dotProduct;
    // Expected answer: -118748

	return 0;
}