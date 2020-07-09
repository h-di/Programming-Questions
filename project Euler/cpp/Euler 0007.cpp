//
// Created by hadi on ۰۹/۰۷/۲۰۲۰.
//

#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;


    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }


    return true;
}

void solution1(const int &n) {

    int counter = 1;
    int num = 1;

    while (counter < n) {
        num += 2;

        if (isPrime(num))
            counter++;
    }

    cout << num << endl;
}


void solution2(const int &n) {

    vector<int> primes;
    primes.push_back(2);

    int num = 1;
    bool isPrime;
    int i;

    while (primes.size() < n) {

        num += 2;
        isPrime = true;
        i = 0;

        for (; primes[i] * primes[i] <= num; ++i) {

            if (num % primes[i] == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            primes.push_back(num);

    }


    cout << num << endl;
}


int main() {

    int n = 10001;

    solution1(n);

    solution2(n);


    return 0;
}


