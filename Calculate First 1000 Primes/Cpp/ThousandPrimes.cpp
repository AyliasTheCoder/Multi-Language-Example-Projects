#include <iostream>
#include <list>

bool isPrime(int number) {
    int check[5] = {
        2,
        3,
        5,
        7,
        11
    };

    for (int x : check) {
        if (number % x == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::list<int> primes = {
        2,
        3,
        5,
        7,
        11
    };

    int i = 12;
    while (primes.size() < 1000) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
        
        i++;
    }

    for (int x : primes) {
        printf("%d\n", x);
    }

    return 0;
}