#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int countPrimeDivisors(long long x) {
    if (x < 0) x = std::llabs(x);
    if (x <= 1) return 0;
    int count = 0;
    if (x % 2 == 0) {
        count++;
        while (x % 2 == 0)
            x /= 2;
    }
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) {
            count++;
            while (x % i == 0)
                x /= i;
        }
    }
    if (x > 1)
        count++;

    return count;
}

int task6() {
    long long n;
    if (!(cin >> n)) {
        cerr << "Invalid input." << '\n';
        return 1;
    }
    cout << countPrimeDivisors(n) << '\n';
    return 0;
}