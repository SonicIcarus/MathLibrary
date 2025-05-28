#include "Matrices.h"

#define CMP(x, y) \
		(fabsf(x - y) <= FLT_EPSILON * fmaxf(1.0f, fmaxf(fabsf(x), fabsf(y))))

void Transpose(const float* srcMat, float* dstMat, int srcRows, int srcCols) {
    for (int i = 0; i < srcRows * srcCols; i++) {
        int row = i / srcRows;
        int col = i % srcRows;
        dstMat[i] = srcMat[srcCols * col + row];
    }
}

mat2 Transpose(const mat2& matrix) {
    mat2 result;
    Transpose(matrix.asArray, result.asArray, 2, 2);
    return result;
}

mat3 Transpose(const mat3& matrix) {
    mat3 result;
    Transpose(matrix.asArray, result.asArray, 3, 3);
    return result;
}

mat4 Transpose(const mat4& matrix) {
    mat4 result;
    Transpose(matrix.asArray, result.asArray, 4, 4);
    return result;
}

mat2 operator*(const mat2& matrix, float scalar)
{
    return mat2();
}

mat3 operator*(const mat3& matrix, float scalar)
{
    return mat3();
}

mat4 operator*(const mat4& matrix, float scalar)
{
    return mat4();
}
