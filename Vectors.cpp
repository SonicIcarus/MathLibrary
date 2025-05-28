#include "Vectors.h"

// Macro that uses Float Epsilon as a threshold buffer for comparing two floating point numbers.
// This helps us to determine if they are close enough to be considered equal, accouting for prescison errors.
#define CMP(x, y)                    \
    (fabsf((x)–(y)) <= FLT_EPSILON * \
      fmaxf(1.0f,                    \
      fmaxf(fabsf(x), fabsf(y)))     \
   )

vec2 operator+(const vec2& l, const vec2& r)
{
	return vec2();
}

vec3 operator+(const vec3& l, const vec3& r)
{
	return vec3();
}

vec2 operator-(const vec2& l, const vec2& r)
{
	return vec2();
}

vec3 operator-(const vec3& l, const vec3& r)
{
	return vec3();
}

vec2 operator*(const vec2& l, const vec2& r)
{
	return vec2();
}

vec3 operator*(const vec3& l, const vec3& r)
{
	return vec3();
}

vec2 operator*(const vec2& l, float r)
{
	return vec2();
}

vec3 operator*(const vec3& l, float r)
{
	return vec3();
}

bool operator==(const vec2& l, const vec2& r)
{
	return false;
}

bool operator==(const vec3& l, const vec3& r)
{
	return false;
}

bool operator!=(const vec2& l, const vec2& r)
{
	return false;
}

bool operator!=(const vec3& l, const vec3& r)
{
	return false;
}
