#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(long long x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    long long limit = sqrt(x); 
    
    for (long long i = 3; i <= limit; i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int task5() {
    long long x;
    cout << "Enter x: ";
    if (!(cin >> x)) {
        cerr << "Invalid input. Please enter a valid number." << endl;
        return 1;
    }
    if (isPrime(x)) {
        cout << x << " — prime number" << endl;
    } else {
        cout << x << " — not prime number" << endl;
    }

    return 0;
}