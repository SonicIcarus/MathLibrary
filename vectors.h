#ifndef _J_MATH_VECTORS_
#define _J_MATH_VECTORS_

/// <summary>
/// Defines a 2d vector object and allows queries on index values in vector
/// </summary>
typedef struct vec2 {
	union {
		struct {
			float x, y;
		};
		float asArray[2];
	};
	float& operator[] (int i) {
		return asArray[i];
	}

	inline vec2() : x(0.0f), y(0.0f) { }
	inline vec2(float _x, float _y) : x(_x), y(_y) { }
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
			float x, y, z;
		};
		float asArray[3];
	};
	float& operator[] (int i) {
		return asArray[i];
	}
	inline vec3() : x(0.0f), y(0.0f), z(0.0f) { }
	inline vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) { }
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

float Dot(const vec2& l, const vec2& r);
float Dot(const vec3& l, const vec3& r);
float Magnitude(const vec2& v);
float Magnitude(const vec3& v);
float MagnitudeSq(const vec2& v);
float MagnitudeSq(const vec3& v);
float Distance(const vec2& p1, const vec2& p2);
float Distance(const vec3& p1, const vec3& p2);


#endif // !_J_MATH_VECTORS_
