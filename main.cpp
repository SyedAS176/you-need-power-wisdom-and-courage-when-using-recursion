#include <iostream>
#include "src/TriangleNumberCalculator.hpp"

using namespace std;

int main() {
    TriangleNumberCalculator calculator;

    cout << "Triangle Numbers:" << endl;
    cout << "T1 = " << calculator.value(1) << endl;
    cout << "T2 = " << calculator.value(2) << endl;
    cout << "T4 = " << calculator.value(4) << endl;

    cout << "\nAddition:" << endl;
    cout << "T1 + T1 = " << calculator.add(1, 1) << endl;
    cout << "T2 + T3 = " << calculator.add(2, 3) << endl;
    cout << "T4 + T2 = " << calculator.add(4, 2) << endl;

    cout << "\nSubtraction:" << endl;
    cout << "T1 - T1 = " << calculator.subtract(1, 1) << endl;
    cout << "T2 - T3 = " << calculator.subtract(2, 3) << endl;
    cout << "T4 - T2 = " << calculator.subtract(4, 2) << endl;

    cout << "\nMultiplication:" << endl;
    cout << "T2 * T3 = " << calculator.multiply(2, 3) << endl;
    cout << "T4 * T4 = " << calculator.multiply(4, 4) << endl;

    cout << "\nDivision:" << endl;
    cout << "T4 / T2 = " << calculator.divide(4, 2) << endl;

    cout << "\nSequence up to T5:" << endl;
    vector<int> seq = calculator.sequence(5);
    for (int x : seq) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}