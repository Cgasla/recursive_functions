#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

double f(double x) {
    if (x <= 0) return -numeric_limits<double>::infinity();
    return cos(sin(7 * x)) + cos(log2(x));
}

pair<double, double> findMax(double a, double b, double eps = 0.0001) {
    double maxValue = f(a);
    double maxX = a;

    for (double x = a; x <= b; x += eps) {
        double y = f(x);
        if (y > maxValue) {
            maxValue = y;
            maxX = x;
        }
    }
    return {maxX, maxValue};
}

int main() {
    double a, b;
    cout << "Enter a segment [a, b]: ";
    while (!(cin >> a >> b) || a >= b) {
        cout << "Invalid input. Enter two numbers where a < b: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    auto result = findMax(a, b);

    cout << "Max value of function on [" << a << ", " << b << "] is "
         << result.second << " at x = " << result.first << endl;

    return 0;
}
