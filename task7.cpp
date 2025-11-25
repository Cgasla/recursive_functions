#include <iostream>
using namespace std;
static const long long A = -1000;
static const long long B = 1000;
int task7() {
    long long x;
    cout << "Enter a number: ";
    if (!(cin >> x)) {
        cerr << "Invalid input type." << endl;
        return 1;
    }
    while (x < A || x > B) {
        cout << "You entered an invalid input. Enter another number: ";
        if (!(cin >> x)) {
            cerr << "Invalid input type." << endl;
            return 1;
        }
    }
    cout << "Input accepted." << endl;
    return 0;
}