//
// Created by hadi on ۰۴/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;

int main() {

    auto n = 600851475143;

    int LargestFactor = 0;
    int i = 2;


    while (i * i <= n) {

        if (n % i == 0) {

            n /= i;
            LargestFactor = i;

        } else
            i++;
    }

    if (n > LargestFactor)
        LargestFactor = n;


    cout << LargestFactor;


    return 0;
}