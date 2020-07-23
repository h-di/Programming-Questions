//
// Created by hadi on ۲۳/۰۷/۲۰۲۰.
//

#include <iostream>

using namespace std;

int main() {


    int triangle;

    for (int i = 1, countOfDiv = 0; countOfDiv <= 500; ++i) {
        countOfDiv = 0;

        triangle = i * (i + 1) / 2;

        for (int j = 1; j * j <= triangle; ++j) {

            if (triangle % j == 0) {
                countOfDiv++;

                if (triangle / i != i)
                    countOfDiv++;
            }
        }
    }

    cout << triangle << endl;


    return 0;
}

