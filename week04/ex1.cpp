#include <iostream>

using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    while (word.size() > 0) {
        cout << word << endl;
        word.resize(word.size() - 1);
    }

    return 0;
}
