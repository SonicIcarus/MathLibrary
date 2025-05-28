#include "Vectors.h"
#include "Matrices.h"
#include <iostream>

int main()
{
	//vec2 right_2d = { 1.2f, 20.7f };
	//vec3 right_3d = { 1.0f, 50.0f, 600.0f };

	//vec2 left_2d = { 5.0f, 15.0f };
	//vec3 left_3d = { 2.0f, 25.0f, -200.0f };

	//std::cout << "2D: vec1: " << right_2d << "\nvec2: " << left_2d << "\n";
	//std::cout << "3D: vec1: " << right_3d << "\nvec2: " << left_3d << "\n\n";

	//float scalar = 3.0f;

	//// 2D
	//vec2 arithmetic2D = right_2d * scalar;
	//std::cout << "arithmetic2D: " << arithmetic2D << "\n\n";

	//float magnitudeRight2D = MagnitudeSq(right_2d);
	//std::cout << "RightMagnitude: " << magnitudeRight2D << "\n\n";
	//float magnitudeLeft2D = MagnitudeSq(left_2d);
	//std::cout << "LeftMagnitude: " << magnitudeLeft2D << "\n\n";

	//float distance2D = DistanceSq(right_2d, left_2d);
	//std::cout << "Distance between: " << distance2D << "\n\n";

	//vec2 nor2D = Normalized(right_2d);
	//std::cout << "Right normalise: " << nor2D << "\n\n";

	//float angle2D = Angle(right_2d, left_2d);
	//std::cout << "Angle between: " << angle2D << "\n\n";

	//vec2 proj2D = Project(right_2d, left_2d);
	//std::cout << "Projected value: " << proj2D << "\n\n";

	//vec2 reflectoin2D = Reflection(right_2d, left_2d);
	//std::cout << "Reflection value: " << reflectoin2D << "\n\n";

	//float dotProduct2D = DotProduct(right_2d, left_2d);
	//std::cout << "The 2D dot product: " << dotProduct2D << "\n\n";

	////3D
	//vec3 arithmetic3D = right_3d * scalar;
	//std::cout << "arithmetic3D: " << arithmetic3D << "\n\n";

	//float magnitudeRight3D = MagnitudeSq(right_3d);
	//std::cout << "RightMagnitude: " << magnitudeRight3D << "\n\n";
	//float magnitudeLeft3D = MagnitudeSq(left_3d);
	//std::cout << "LeftMagnitude: " << magnitudeLeft3D << "\n\n";

	//float distance3D = DistanceSq(right_3d, left_3d);
	//std::cout << "Distance between: " << distance3D << "\n\n";

	//vec3 nor3D = Normalized(right_3d);
	//std::cout << "Right normalise: " << nor3D << "\n\n";

	//vec3 cross3D = CrossProduct(right_3d, left_3d);
	//std::cout << "Cross product: " << cross3D << "\n\n";

	//float angle3D = Angle(right_3d, left_3d);
	//std::cout << "Angle between: " << angle3D << "\n\n";

	//vec3 proj3D = Project(right_3d, left_3d);
	//std::cout << "Projected value: " << proj3D << "\n\n";

	//vec3 reflectoin3D = Reflection(right_3d, left_3d);
	//std::cout << "Reflection value: " << reflectoin3D << "\n\n";

	//float dotProduct3D = DotProduct(right_3d, left_3d);
	//std::cout << "The 3D dot product: " << dotProduct3D << "\n\n";

	mat2 m2 = { 1.0f, 0.0f,
			5.0f, 7.0f };

	mat3 m3 = { 1.0f, 0.0f, 6.0f,
			4.0f, 1.0f, 12.0f,
			17.0f, 0.0f, 5.0f };

	mat4 m4 = { 1.0f, 2.0f, 3.0f, 4.0f,
			5.0f, 1.0f, 6.0f, 7.0f,
			9.0f, 8.0f, 1.0f, 5.0f,
			10.0f, 12.0f, 15.0f, 1.0f };

	std::cout << "2D matrix\n" << m2[0][0] << " " << m2[0][1] << "\n";
	std::cout << m2[1][0] << " " << m2[1][1] << "\n\n\n";

	m2 = Transpose(m2);

	std::cout << m2[0][0] << " " << m2[0][1] << "\n";
	std::cout << m2[1][0] << " " << m2[1][1] << "\n\n\n";

	std::cout << "3D matrix\n" << m3[0][0] << " " << m3[0][1] << " " << m3[0][2] << "\n";
	std::cout << m3[1][0] << " " << m3[1][1] << " " << m3[1][2] << "\n";
	std::cout << m3[2][0] << " " << m3[2][1] << " " << m3[2][2] << "\n\n\n";

	m3 = Transpose(m3);

	std::cout << m3[0][0] << " " << m3[0][1] << " " << m3[0][2] << "\n";
	std::cout << m3[1][0] << " " << m3[1][1] << " " << m3[1][2] << "\n";
	std::cout << m3[2][0] << " " << m3[2][1] << " " << m3[2][2] << "\n\n\n";

	std::cout << "4D matrix\n" << m4[0][0] << " " << m4[0][1] << " " << m4[0][2] << " " << m4[0][3] << "\n";
	std::cout << m4[1][0] << " " << m4[1][1] << " " << m4[1][2] << " " << m4[1][3] << "\n";
	std::cout << m4[2][0] << " " << m4[2][1] << " " << m4[2][2] << " " << m4[2][3] << "\n";
	std::cout << m4[3][0] << " " << m4[3][1] << " " << m4[3][2] << " " << m4[3][3] << "\n\n\n";

	m4 = Transpose(m4);

	std::cout << m4[0][0] << " " << m4[0][1] << " " << m4[0][2] << " " << m4[0][3] << "\n";
	std::cout << m4[1][0] << " " << m4[1][1] << " " << m4[1][2] << " " << m4[1][3] << "\n";
	std::cout << m4[2][0] << " " << m4[2][1] << " " << m4[2][2] << " " << m4[2][3] << "\n";
	std::cout << m4[3][0] << " " << m4[3][1] << " " << m4[3][2] << " " << m4[3][3] << "\n\n\n";


	return 0;
}