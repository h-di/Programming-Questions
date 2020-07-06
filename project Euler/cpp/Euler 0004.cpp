//
// Created by hadi on ۰۶/۰۷/۲۰۲۰.
//

#include <iostream>
#include <algorithm>

using namespace std;

bool revers(const int &num) {

    string s = to_string(num);
    reverse(s.begin(), s.end());

    return s == to_string(num);
}

int main() {

    int largest = 0;

    for (int i = 999; i > 100; --i) {
        for (int j = i; j > 100; --j) {

            if (revers(i * j)) {
                largest = max(largest, i * j);
            }
        }
    }

    cout << largest << endl;


    return 0;
}