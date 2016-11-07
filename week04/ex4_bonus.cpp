#include <iostream>

using namespace std;

int main() {
    string phrase, reversed;
    cout << "Enter a phrase: ";
    getline(cin, phrase);

    reversed = phrase;
    char temp;
    for (int i = 0; i < reversed.size() / 2; ++i) {
        temp = reversed.at(i);
        reversed.at(i) = reversed.at(reversed.size() - (i + 1));
        reversed.at(reversed.size() - (i + 1)) = temp;
    }

    cout << reversed << endl;
    if (reversed == phrase) {
        cout << reversed << "is a palindrome!" << endl;
    }
        
    return 0;
}
