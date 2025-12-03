#include "math_ops.h"

// naive addition
int add(int a, int b) {
    return a + b;
}

// slow recursive factorial
int slowFactorial(int n) {
    if (n <= 1) return 1;
    return n * slowFactorial(n - 1);
}
