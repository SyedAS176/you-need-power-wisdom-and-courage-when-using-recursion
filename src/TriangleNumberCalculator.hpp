#pragma once
#include <vector>

class TriangleNumberCalculator {
public:
    // Returns the nth triangular number using recursion
    int value(int n);

    // Arithmetic operations using triangular numbers
    int add(int n, int m);
    int subtract(int n, int m);
    int multiply(int n, int m);
    double divide(int n, int m);

    // Returns a sequence of triangular numbers from T1 to Tn
    std::vector<int> sequence(int n);
};