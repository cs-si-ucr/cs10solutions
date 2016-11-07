#include <iostream>

using namespace std;

int main() {
    string answer;
    string prompt = "How does your number compare to ";
    string win    = "I got it! Your number is ";
    string lose   = "No cheating! x(";

    cout << "Pick a number between 1 and 5" << endl;
    cout << "Answer all questions with \"less\", \"greater\", or \"equal\" "
        << "when appropriate" << endl << endl;
    

    cout << prompt << "3? ";
    cin >> answer;

    if (answer == "greater") {
        cout << prompt << "5? ";
        cin >> answer;
        if (answer == "less") {
            cout << prompt << "4? ";
            cin >> answer;
            if (answer == "equal") {
                cout << win << "5!" << endl;
            } else {
                cout << lose;
            }
        } else if (answer == "equal") {
            cout << win << "5!" << endl;
        } else {
            cout << lose;
        }
    } else if (answer == "less") {
        cout << prompt << "1? ";
        cin >> answer;
        if (answer == "greater") {
            cout << prompt << "2? ";
            cin >> answer;
            if (answer == "equal") {
                cout << win << "2!" << endl;
            } else {
                cout << lose;
            }
        } else if (answer == "equal") {
            cout << win << "1!" << endl;
        } else {
            cout << lose;
        }
    } else if (answer == "equal") {
        cout << "What a lucky guess! " << win << "3!" << endl;
    } else {
        cout << "We'll play again later, once you learn how to type correctly"
            << endl;
    }

    return 0;
}
