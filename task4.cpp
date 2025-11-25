#include <iostream>

using namespace std;

int maxPowerOfThree(long long x) {
    if (x < 1) return 0;

    int y = 0;
    long long power = 1;
    while (power <= x / 3) {
        power *= 3;
        y++;
    }

    return y;
}

int task4() {
    long long x;
    cout << "Enter x: ";

    if (!(cin >> x)) {
        cerr << "Invalid input. Please enter a valid number." << endl;
        return 1; 
    }

    int result = maxPowerOfThree(x);
    cout << "Max: " << result << endl;

    return 0;
}