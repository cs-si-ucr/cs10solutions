#include <iostream>

using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    cout << "'" << character << "' in decimal is "
        << static_cast<int>(character) << endl;

    return 0;
}
