#include <iostream>

using namespace std;

int main() {
    double dividend  = 0.0;
    double divisor = 0.0;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    int wholePart = dividend / divisor;
    double remainder = dividend - (wholePart * divisor);

    cout << dividend << " % " << divisor << " == " << remainder << endl;

    return 0;
}
