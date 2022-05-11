#include "vectors.h"
#include <cmath>
#include <cfloat>

// Allows for comparison between vectors
// Reference: http://www.realtimecollisiondetection.net/pubs/Tolerances/
#define CMP(x, y) \
		(fabsf(x - y) <= FLT_EPSILON * fmaxf(1.0f, fmaxf(fabsf(x), fabsf(y))))

bool operator==(const vec2& l, const vec2& r) {
    return CMP(l.x, r.x) && CMP(l.y, r.y);
}

bool operator==(const vec3& l, const vec3& r) {
    return CMP(l.x, r.x) && CMP(l.y, r.y) && CMP(l.z, r.z);
}

vec2 operator+(const vec2& l, const vec2& r) {
    return { l.x + r.x, l.y + r.y };
}

vec3 operator+(const vec3& l, const vec3& r) {
    return { l.x + r.x, l.y + r.y, l.z + r.z };
}

vec2 operator-(const vec2& l, const vec2& r) {
    return { l.x - r.x, l.y - r.y };
}

vec3 operator-(const vec3& l, const vec3& r) {
    return { l.x - r.x, l.y - r.y, l.z - r.z };
}

vec2 operator*(const vec2& l, const vec2& r) {
    return { l.x * r.x, l.y * r.y };
}

vec3 operator*(const vec3& l, const vec3& r) {
    return { l.x * r.x, l.y * r.y, l.z * r.z };
}

vec2 operator*(const vec2& l, float r) {
    return { l.x * r, l.y * r };
}

vec3 operator*(const vec3& l, float r) {
    return { l.x * r, l.y * r, l.z * r };
}


bool operator!=(const vec2& l, const vec2& r) {
    return !(l == r);
}

bool operator!=(const vec3& l, const vec3& r) {
    return !(l == r);
}

float Dot(const vec2& l, const vec2& r) {
    return l.x * r.x + l.y * r.y;
}

float Dot(const vec3& l, const vec3& r) {
    return l.x * r.x + l.y * r.y + l.z * r.z;
}

float Magnitude(const vec2& v) {
    return sqrtf(Dot(v, v));
}

float Magnitude(const vec3& v) {
    return sqrtf(Dot(v, v));
}

float MagnitudeSq(const vec2& v) {
    return Dot(v, v);
}

float MagnitudeSq(const vec3& v) {
    return Dot(v, v);
}

float Distance(const vec2& p1, const vec2& p2)
{
    vec2 t = p1 - p2;
    return Magnitude(t);
}

float Distance(const vec3& p1, const vec3& p2) {
    vec3 t = p1 - p2;
    return Magnitude(t);
}