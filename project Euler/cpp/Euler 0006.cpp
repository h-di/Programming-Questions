//
// Created by hadi on ۰۸/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;


void solution1() {

    int sum = 0;
    int pow = 0;

    for (int i = 1; i <= 100; ++i) {
        sum += i * i;
        pow += i;
    }

    cout << pow * pow - sum << endl;
}


void solution2() {

    const int n = 100;

    int sum = n * (n + 1) / 2;

    int pow = (n * (n + 1) * (2 * n + 1)) / 6;

    cout << sum * sum - pow << endl;
}


int main() {

    solution1();

    solution2();


    return 0;
}


