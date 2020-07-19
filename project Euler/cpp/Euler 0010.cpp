//
// Created by hadi on ۱۹/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;

int main() {


    int n = 2'000'000;

    long sum = 2;
    bool isPrime;

    for (int i = 3; i <= n; i += 2) {

        isPrime = true;

        for (int j = 2; j * j <= i; ++j) {

            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            sum += i;

    }

    cout << sum << endl;



    return 0;
}


