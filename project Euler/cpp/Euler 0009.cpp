//
// Created by hadi on ۱۸/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;

int main() {


    for (int a = 1, c, n = 1000; a < n / 3; ++a) {

        for (int b = a + 1; b < n / 2; ++b) {

            c = n - a - b;

            if (a * a + b * b == c * c) {
                cout << a * b * c << endl;

                return 0;
            }

        }

    }

    return 0;
}

