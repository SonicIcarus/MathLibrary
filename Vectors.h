#ifndef _H_MATH_VECTORS_
#define _H_MATH_VECTORS_

#include <cmath>
#include <cfloat>

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
} vec3;

vec2 operator+(const vec2& l, const vec2& r);
vec3 operator+(const vec3& l, const vec3& r);
vec2 operator-(const vec2& l, const vec2& r);
vec3 operator-(const vec3& l, const vec3& r);
vec2 operator*(const vec2& l, const vec2& r);
vec3 operator*(const vec3& l, const vec3& r);
vec2 operator*(const vec2& l, float r);
vec3 operator*(const vec3& l, float r);
bool operator==(const vec2& l, const vec2& r);
bool operator==(const vec3& l, const vec3& r);
bool operator!=(const vec2& l, const vec2& r);
bool operator!=(const vec3& l, const vec3& r);

#endif // !_H_MATH_VECTORS_