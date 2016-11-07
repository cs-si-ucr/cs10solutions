#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number between -50 and 50: ";
    cin >> number;

    cout << "Your number is ";
    if (number == 0) {
        cout << number << endl;
    } else if (number < 0) {
        if (number % 10 == 0) {
            cout << "a negative multiple of 10" << endl;
        } else {
            cout << "negative and between " << number / 10 * 10 - 10 << " and "
                << number / 10 * 10 << endl;
        }
    } else { // number > 0
        if (number % 10 == 0) {
            cout << "a positive multiple of 10" << endl;
        } else {
            cout << "positive and between " << number / 10 * 10 << " and "
                << number / 10 * 10 + 10 << endl;
        }
    }

    return 0;
}
