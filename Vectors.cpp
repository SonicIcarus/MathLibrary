#include "Vectors.h"

// Macro that uses Float Epsilon as a threshold buffer for comparing two floating point numbers.
// This helps us to determine if they are close enough to be considered equal, accouting for prescison errors.
// see: www.realtimecollisiondetection.net/pubs/Tolerances.
#define CMP(x, y) \
		(fabsf(x - y) <= FLT_EPSILON * fmaxf(1.0f, fmaxf(fabsf(x), fabsf(y))))
// Simple and handy converting macros from radians to degrees and vice versa.
#define RAD2DEG(x) ((x) * 57.295754f)
#define DEG2RAD(x) ((x) * 0.0174533f)

vec2 operator+(const vec2& l, const vec2& r)
{
	return { l.x + r.x, l.y + r.y };
}

vec3 operator+(const vec3& l, const vec3& r)
{
	return { l.x + r.x, l.y + r.y, l.z + r.z };
}

vec2 operator-(const vec2& l, const vec2& r)
{
	return { l.x - r.x, l.y - r.y };
}

vec3 operator-(const vec3& l, const vec3& r)
{
	return { l.x - r.x, l.y - r.y, l.z - r.z };
}

vec2 operator*(const vec2& l, const vec2& r)
{
	return { l.x * r.x, l.y * r.y };
}

vec3 operator*(const vec3& l, const vec3& r)
{
	return { l.x * r.x, l.y * r.y, l.z * r.z };
}

vec2 operator*(const vec2& l, float r)
{
	return { l.x * r, l.y * r };
}

vec3 operator*(const vec3& l, float r)
{
	return { l.x * r, l.y * r, l.z * r };
}

std::ostream& operator<<(std::ostream& os, const vec2& m)
{
	os << "(" << m.x << ", " << m.y << ")";
	return os;
}

std::ostream& operator<<(std::ostream& os, const vec3& m)
{
	os << "(" << m.x << ", " << m.y << ", " << m.z << ")";
	return os;
}

bool operator==(const vec2& l, const vec2& r)
{
	return CMP(l.x, r.x) && CMP(l.y, r.y);
}

bool operator==(const vec3& l, const vec3& r)
{
	return CMP(l.x, r.x) && CMP(l.y, r.y) && CMP(l.z, r.z);
}

bool operator!=(const vec2& l, const vec2& r)
{
	return !(l == r);
}

bool operator!=(const vec3& l, const vec3& r)
{
	return !(l == r);
}

vec2& operator+=(vec2& l, const vec2& r)
{
	l.x += r.x;
	l.y += r.y;
	return l;
}

vec2& operator-=(vec2& l, const vec2& r)
{
	l.x -= r.y;
	l.y -= r.y;
	return l;
}

vec2& operator*=(vec2& l, const vec2& r)
{
	l.x *= r.x;
	l.y *= r.y;
	return l;
}

vec2& operator*=(vec2& l, const float r)
{
	l.x *= r;
	l.y *= r;
	return l;
}

vec3& operator+=(vec3& l, const vec3& r)
{
	l.x += r.x;
	l.y += r.y;
	l.z += r.z;
	return l;
}

vec3& operator-=(vec3& l, const vec3& r)
{
	l.x -= r.x;
	l.y -= r.y;
	l.z -= r.z;
	return l;
}

vec3& operator*=(vec3& l, const vec3& r)
{
	l.x *= r.x;
	l.y *= r.y;
	l.z *= r.z;
	return l;
}

vec3& operator*=(vec3& l, const float r)
{
	l.x *= r;
	l.y *= r;
	l.z *= r;
	return l;
}

float DotProduct(const vec2& l, const vec2& r)
{
	return l.x * r.x + l.y * r.y;
}

float DotProduct(const vec3& l, const vec3& r)
{
	return l.x * r.x + l.y * r.y + l.z * r.z;
}

float Magnitude(const vec2& v)
{
	return sqrt(DotProduct(v, v));
}

float Magnitude(const vec3& v)
{
	return sqrt(DotProduct(v, v));
}

float MagnitudeSq(const vec2& v)
{
	return DotProduct(v, v);
}

float MagnitudeSq(const vec3& v)
{
	return DotProduct(v, v);
}

float Distance(const vec2& p1, const vec2& p2) {
	return Magnitude(p1 - p2);
}

float Distance(const vec3& p1, const vec3& p2) {
	return Magnitude(p1 - p2);
}

float DistanceSq(const vec2& p1, const vec2& p2) {
	return MagnitudeSq(p1 - p2);
}

float DistanceSq(const vec3& p1, const vec3& p2) {
	return MagnitudeSq(p1 - p2);
}

vec2 RotateVector(const vec2& vector, float degrees) {
	degrees = DEG2RAD(degrees);
	float s = sinf(degrees);
	float c = cosf(degrees);

	return vec2(
		vector.x * c - vector.y * s,
		vector.x * s + vector.y * c
	);
}

void Normalize(vec2& v) {
	v = v * (1.0f / Magnitude(v));
}

void Normalize(vec3& v) {
	v = v * (1.0f / Magnitude(v));
}

vec2 Normalized(const vec2& v) {
	return v * (1.0f / Magnitude(v));
}
vec3 Normalized(const vec3& v) {
	return v * (1.0f / Magnitude(v));
}

vec3 CrossProduct(const vec3& l, const vec3& r) {
	vec3 result;
	result.x = l.y * r.z - l.z * r.y;
	result.y = l.z * r.x - l.x * r.z;
	result.z = l.x * r.y - l.y * r.x;
	return result;
}

// returned in radians
float Angle(const vec2& l, const vec2& r) {
	return acosf(DotProduct(l, r) / sqrtf(MagnitudeSq(l) * MagnitudeSq(r)));
}

float Angle(const vec3& l, const vec3& r) {
	return acosf(DotProduct(l, r) / sqrtf(MagnitudeSq(l) * MagnitudeSq(r)));
}

vec2 Project(const vec2& length, const vec2& direction) {
	float dot = DotProduct(length, direction);
	float magSq = MagnitudeSq(direction);
	return direction * (dot / magSq);
}

vec3 Project(const vec3& length, const vec3& direction) {
	float dot = DotProduct(length, direction);
	float magSq = MagnitudeSq(direction);
	return direction * (dot / magSq);
}

vec2 Perpendicular(const vec2& length, const vec2& direction) {
	return length - Project(length, direction);
}

vec3 Perpendicular(const vec3& length, const vec3& direction) {
	return length - Project(length, direction);
}

vec2 Reflection(const vec2& sourceVector, const vec2& normal) {
	vec2 unitNormal = Normalized(normal);
	return sourceVector - unitNormal * (DotProduct(sourceVector, unitNormal) * 2.0f);
}

vec3 Reflection(const vec3& sourceVector, const vec3& normal) {
	vec3 unitNormal = Normalized(normal);
	return sourceVector - unitNormal * (DotProduct(sourceVector, unitNormal) * 2.0f);
}

vec3 ToString(vec3& display)
{
	vec3 result = { display.x, display.y, display.z };
	return result;
}