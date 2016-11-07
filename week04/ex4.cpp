#include <iostream>

using namespace std;

int main() {
    string phrase;
    cout << "Enter a phrase: ";
    getline(cin, phrase);

    for (int i = 0; i < phrase.size(); ++i) {
        cout << phrase.at(phrase.size() - (i + 1));
    }

    cout << endl;

    return 0;
}
