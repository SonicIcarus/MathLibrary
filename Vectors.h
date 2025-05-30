#ifndef _H_MATH_VECTORS_
#define _H_MATH_VECTORS_

#include <cmath>
#include <cfloat>
#include <ostream>

/// <summary>
/// Defines a 2d vector object and allows queries on index values in vector
/// </summary>
typedef struct vec2 {
	union {
		struct {
			float x;
			float y;
		};
		float asArray[2];
	};

	inline float& operator[](int i) {
		return asArray[i];
	}
	inline vec2() : x(0.0f), y(0.0f) {}
	inline vec2(float _x, float _y) : x(_x), y(_y) {}
} vec2;

/// <summary>
/// Defines a 3d vector object and allows queries on index values in vector
/// Example: vec3 right = { 1.0f, 50.0f, 600.0f };
/// std::cout << "Component 0: " << right.x << "\n";
/// std::cout << "Component 0: " << right.asArray[0] << "\n";
/// std::cout << "Component 0: " << right[0] << "\n";
/// * Will all output 1.0f *
/// </summary>
typedef struct vec3 {
	union {
		struct {
			float x;
			float y;
			float z;
		};
		float asArray[3];
	};

	inline float& operator[](int i) {
		return asArray[i];
	}
	inline vec3() : x(0.0f), y(0.0f), z(0.0f) {}
	inline vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
} vec3;

vec2 operator+(const vec2& l, const vec2& r);
vec3 operator+(const vec3& l, const vec3& r);

vec2 operator-(const vec2& l, const vec2& r);
vec3 operator-(const vec3& l, const vec3& r);

vec2 operator*(const vec2& l, const vec2& r);
vec3 operator*(const vec3& l, const vec3& r);

vec2 operator*(const vec2& l, float r);
vec3 operator*(const vec3& l, float r);

std::ostream& operator<<(std::ostream& os, const vec2& m);
std::ostream& operator<<(std::ostream& os, const vec3& m);

bool operator==(const vec2& l, const vec2& r);
bool operator==(const vec3& l, const vec3& r);
bool operator!=(const vec2& l, const vec2& r);
bool operator!=(const vec3& l, const vec3& r);

vec2& operator+=(vec2& l, const vec2& r);
vec2& operator-=(vec2& l, const vec2& r);
vec2& operator*=(vec2& l, const vec2& r);
vec2& operator*=(vec2& l, const float r);

vec3& operator+=(vec3& l, const vec3& r);
vec3& operator-=(vec3& l, const vec3& r);
vec3& operator*=(vec3& l, const vec3& r);
vec3& operator*=(vec3& l, const float r);

float DotProduct(const vec2& l, const vec2& r);
float DotProduct(const vec3& l, const vec3& r);

float Magnitude(const vec2& v);
float Magnitude(const vec3& v);

float MagnitudeSq(const vec2& v);
float MagnitudeSq(const vec3& v);

float Distance(const vec2& p1, const vec2& p2);
float Distance(const vec3& p1, const vec3& p2);

float DistanceSq(const vec2& p1, const vec2& p2);
float DistanceSq(const vec3& p1, const vec3& p2);

vec2 RotateVector(const vec2& vector, float degrees);

void Normalize(vec2& v);
void Normalize(vec3& v);

vec2 Normalized(const vec2& v);
vec3 Normalized(const vec3& v);

vec3 CrossProduct(const vec3& l, const vec3& r);

float Angle(const vec2& l, const vec2& r);
float Angle(const vec3& l, const vec3& r);

vec2 Project(const vec2& length, const vec2& direction);
vec3 Project(const vec3& length, const vec3& direction);

vec2 Perpendicular(const vec2& length, const vec2& direction);
vec3 Perpendicular(const vec3& length, const vec3& direction);

vec2 Reflection(const vec2& sourceVector, const vec2& normal);
vec3 Reflection(const vec3& sourceVector, const vec3& normal);

vec3 ToString(vec3& display);

#endif // !_H_MATH_VECTORS_