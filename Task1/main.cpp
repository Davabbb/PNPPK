#include <vector>
#include "CppUTest/CommandLineTestRunner.h"
#include "main.h"


bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

std::vector<int> generatePrimes(int n) {
    if (n == 0)
        return std::vector<int>{};

    std::vector<int> primes = {2};
    int currentNumber = 3;

    while (primes.size() < n) {
        if (isPrime(currentNumber))
            primes.push_back(currentNumber);

        currentNumber++;
    }

    return primes;
}

int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}