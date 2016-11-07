#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    char lowerC, upperC;

    if ('a' <= c && c <= 'z') {
        // c is lowercase
        lowerC = c;
        upperC = c - 'a' + 'A';
    } else if ('A' <= c && c <= 'Z') {
        // c is uppercase
        lowerC = c - 'A' + 'a';
        upperC = c;
    } else {
        // c is not an alphabetic character
        lowerC = c;
        upperC = c;
    }

    cout << "'" << lowerC << "' in decimal is " << static_cast<int>(lowerC)
        << endl;
    cout << "'" << upperC << "' in decimal is " << static_cast<int>(upperC)
        << endl;

    return 0;
}
