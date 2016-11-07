#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int tries = 5;
    string hint = "the password starts with \"s\"";
    string password = "silicon"; // lowercase for comparison
    string guess;
    bool correct = false;

    cout << "Password: ";
    cin >> guess;
    for (int i = 0; i < guess.size(); ++i) {
        guess.at(i) = tolower(guess.at(i));
    }
    correct = guess == password;
    tries--;

    while (tries > 0 && !correct) {
        cout << "Incorrect. Hint: " << hint << endl;
        cout << "Password: ";
        cin >> guess;
        for (int i = 0; i < guess.size(); ++i) {
            guess.at(i) = tolower(guess.at(i));
        }
        correct = guess == password;
        tries--;
    }

    string word;
    if (!correct) {
        cout << "I'm sorry. You failed to guess the password. Goodbye." << endl;
    } else {
        cout << "Correct password!!" << endl;
        cout << "Enter a word: ";
        cin >> word;

        while (word.size() > 0) {
            cout << word << endl;
            word.resize(word.size() - 1); 
        }
    }

    return 0;
}
