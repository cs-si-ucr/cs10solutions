#include <iostream>

using namespace std;

int main() {
    int n = 1;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        cout << n << endl;
    }

    return 0;
}
