#include <iostream>

using namespace std;

int main() {
    double dividend  = 0.0;
    double divisor = 0.0;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    cout << dividend << " / " << divisor << " == " << dividend / divisor
        << endl;

    return 0;
}
