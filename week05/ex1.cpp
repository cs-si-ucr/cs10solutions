#include <iostream>

using namespace std;

int main() {
    bool exit = false;
    int choice = -1;
    do {
        cout << "Lab 05 Menu" << endl;
        cout << "\t1. Do nothing" << endl;
        cout << "\t2. Exercise 2" << endl;
        cout << "\t3. Exercise 3" << endl;
        cout << "\t4. Exercise 4" << endl;
        cout << "\t5. Exercise 5" << endl;
        cout << "\t6. Exit" << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        while (choice < 1 || choice > 6) {
            cout << "Invalid choice, try again." << endl;
            cout << "Enter your choice: ";
            cin >> choice;
        }
        cout << endl;
        if (choice == 2) {
            cout << "Executing exercise 2..." << endl;
        } else if (choice == 3) {
            cout << "Executing exercise 3..." << endl;
        } else if (choice == 4) {
            cout << "Executing exercise 4..." << endl;
        } else if (choice == 5) {
            cout << "Executing exercise 5..." << endl;
        } else if (choice == 6) {
            exit = true;
        }
    } while (!exit);
    cout << "Goodbye!" << endl;

    return 0;
}
