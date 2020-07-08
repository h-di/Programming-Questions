//
// Created by hadi on ۰۸/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;

int main() {

    int num = 2520;

    for (int i = 2; i <= 20; ++i) {

        if (num % i != 0) {

            for (int j = 2; j <= 20; ++j) {

                if ((num * j) % i == 0) {
                    num *= j;
                    break;
                }
            }
        }
    }

    cout << num << endl;


    return 0;
}
