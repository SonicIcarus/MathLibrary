# MathLibrary

DIFF Macro definition
Comparing vectors is a component-wise operation. If every component of each vector is the same, the vectors are equal. However, due to floating point error we can't compare floats directly. Instead, we must do an epsilon comparison. Epsilon tests commonly fall in one of two categories: absolute tolerance and relative tolerance:

#define ABSOLUTE(x, y) (fabsf((x)–(y)) <= FLT_EPSILON)
#define RELATIVE(x, y) \
(fabsf((x) – (y)) <= FLT_EPSILON * Max(fabsf(x), fabsf(y)))

The absolute tolerance test fails when the numbers being compared are large. The relative tolerance test fails when the numbers being compared are small. Because of this, we implemented a tolerance test with the CMP macro that combines the two. The logic behind the CMP macro is described by Christer Ericson at www.realtimecollisiondetection.net/pubs/Tolerances.