#include <iostream>
#include "math_ops.h"
#include "string_ops.h"
#include "array_ops.h"

int main() {
    std::cout << "Add: " << add(10, 25) << std::endl;
    std::cout << "Slow Factorial: " << slowFactorial(12) << std::endl;

    std::string text = "OptimizationAgent";
    std::cout << "Reversed: " << reverseString(text) << std::endl;

    int arr[5] = {5, 3, 2, 4, 1};
    std::cout << "Sum of array: " << sumArray(arr, 5) << std::endl;

    return 0;
}
