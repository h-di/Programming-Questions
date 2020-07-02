//
// Created by hadi on ۰۳/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;

int main() {


    int sum = 0;
    int a = 1;
    int b = 2;

    while (a <= 4000000) {

        if (a % 2 == 0)
            sum += a;

        int c = a + b;
        a = b;
        b = c;

    }

    cout << sum << endl;


    return 0;
}