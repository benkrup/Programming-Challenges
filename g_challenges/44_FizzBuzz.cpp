#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Input to what value FizzBuzz should be calculated: ";
    while (true) {
        cin >> n;

        if (n < 1) {
            cout << n << " is an invalid value for n. Please input an integer greater than 0. ";
        }
        else {
            break;
        }
    }


    for (int i = 1; i < n + 1; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz";
        }
        else if (i % 5 == 0) {
            cout << "Buzz";
        }
        else if (i % 3 == 0) {
            cout << "Fizz";
        }
        else {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}
