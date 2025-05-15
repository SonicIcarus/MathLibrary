#ifndef _H_MATH_VECTORS_
#define _H_MATH_VECTORS_

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

#endif // !_H_MATH_VECTORS_