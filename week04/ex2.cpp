#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers (space-separated): ";
    cin >> num1 >> num2;

    // for the bonus:
    int temp;
    if (num2 < num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int sum = 0;
    for (int i = 0; i < num1; ++i) {
        sum += num2;
    }

    cout << num1 << " * " << num2 << " = " << sum << endl;

    return 0;
}
