#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c1, c2, c3, c4, c5;

    cout << "Enter a 5-letter word: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    c1 = toupper(c1);
    c2 = tolower(c2);
    c3 = tolower(c3);
    c4 = tolower(c4);
    c5 = tolower(c5);
    
    cout << "Your word is " << c1 << c2 << c3 << c4 << c5 << endl;

    return 0;
}
