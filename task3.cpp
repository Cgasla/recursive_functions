#include <iostream>

using namespace std;

int maxFactorial(int max_val) {
    if (max_val < 1) return 0;

    int y = 1;
    long long fact = 1;

    while (fact <= max_val / (y + 1)) {
        y++;
        fact *= y;
    }

    return y;
}

int main() {
    int max_val;

    cout << "Enter the maximum limit (X_max): ";
    if (!(cin >> max_val)) {
        cerr << "Invalid input. Please enter a valid number." << endl;
        return 1;
    }

    int result = maxFactorial(max_val);

    cout << "Max y such that y! <= " << max_val
              << " is: " << result << endl;

    return 0;
}