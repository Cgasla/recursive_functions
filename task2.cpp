#include <iostream>
#include <cmath>

int maxFactorial(int x) {
    if (x < 1) {
        return 0;
    }

    int y = 1;
    long long fact = 1;

    while (fact <= x / (y + 1)) {
        y++;
        fact *= y;
    }

    return y;
}

int task2() {
    int x;

    std::cout << "Enter a positive integer number (x): ";
    
    if (!(std::cin >> x)) {
        std::cerr << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }
    
    int result = maxFactorial(x);
    
    std::cout << "The largest integer y such that y! <= " << x 
              << " is: " << result << std::endl;
              
    return 0;
}