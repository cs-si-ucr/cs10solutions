#include <iostream>

using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    // make a copy that we can modify
    char copy = character;
    int b0 = copy % 2;
    copy /= 2;
    int b1 = copy % 2;
    copy /= 2;
    int b2 = copy % 2;
    copy /= 2;
    int b3 = copy % 2;
    copy /= 2;
    int b4 = copy % 2;
    copy /= 2;
    int b5 = copy % 2;
    copy /= 2;
    int b6 = copy % 2;
    copy /= 2;
    int b7 = copy % 2;

    cout << "'" << character << "' in binary is "
        << b7 << b6 << b5 << b4 << b3 << b2 << b1 << b0 << endl;

    return 0;
}
