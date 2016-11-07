#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c1, c2, c3, c4, c5;

    cout << "Enter a 5-letter word: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    if ('a' <= c1 && c1 <= 'z') {
        // c1 is lowercase
        c1 = c1 - 'a' + 'A';
    }
    if ('A' <= c2 && c2 <= 'Z') {
        // c2 is uppercase
        c2 = c2 - 'A' + 'a';
    }
    if ('A' <= c3 && c3 <= 'Z') {
        // c3 is uppercase
        c3 = c3 - 'A' + 'a';
    }
    if ('A' <= c4 && c4 <= 'Z') {
        // c4 is uppercase
        c4 = c4 - 'A' + 'a';
    }
    if ('A' <= c5 && c5 <= 'Z') {
        // c5 is uppercase
        c5 = c5 - 'A' + 'a';
    }

    cout << "Your word is " << c1 << c2 << c3 << c4 << c5 << endl;

    return 0;
}
