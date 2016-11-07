#include <iostream>

using namespace std;

int main() {
    string phrase;
    cout << "Enter a phrase: ";
    getline(cin, phrase);

    while (phrase.size() > 0) {
        if (phrase.at(phrase.size() - 1) != ' ') {
            cout << phrase << endl;
        }
        phrase.resize(phrase.size() - 1);
    }

    return 0;
}
