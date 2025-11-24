#include <iostream>
#include "TriangleNumberCalculator.hpp"

using namespace std;

// Recursive triangular number calculation
int TriangleNumberCalculator::value(int n) {
    if (n <= 1)
        return n;            // Base case: T1 = 1 OR T0 = 0 (accounting for 0 otherwise weird stuff happens)
    return n + value(n - 1); // Recursive case
}

int TriangleNumberCalculator::add(int n, int m) {
    return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
    return value(n) - value(m);
}

int TriangleNumberCalculator::multiply(int n, int m) {  // (One Credit) Multiplication
    return value(n) * value(m);
}

double TriangleNumberCalculator::divide(int n, int m) {  // (One Credit) Division
    int denom = value(m);
    if (denom == 0) {
        cerr << "Error: Cannot divide by 0.\n";
        return 0.0;
    }
    return static_cast<double>(value(n)) / denom;  // Converting the numerator into a double via static cast since value(n) returns int
}

vector<int> TriangleNumberCalculator::sequence(int n) {  // (Two Credits) Sequence
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(value(i));
    }
    return result;
}