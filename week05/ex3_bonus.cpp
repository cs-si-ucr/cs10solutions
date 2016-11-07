#include <iostream>
#include <cmath>

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

            string word;
            cout << "Enter a 4 letter word: ";
            cin >> word;
            for (int i = 0; i < word.size(); ++i) {
                for (int j = 0; j < word.size(); ++j) {
                    for (int k = 0; k < word.size(); ++k) {
                        for (int l = 0; l < word.size(); ++l) {
                            cout << word.at(i) << word.at(j)
                                << word.at(k) << word.at(l) << endl;
                        }
                    }
                }
            }
        } else if (choice == 3) {
            cout << "Executing exercise 3..." << endl;

            int num;
            cout << "Please enter a number: ";
            cin >> num;

            int maxWidth = log10(num * num) + 1;


            for (int i = 0; i <= num; ++i) {
                for (int j = 0; j <= num; ++j) {
                    int width = 0;
                    if (i == 0) {
                        if (j == 0) {
                            width = 0;
                            while (maxWidth > width) {
                                cout << ' ';
                                width++;
                            }
                        } else {
                            width = log10(j);
                            while(maxWidth > width) {
                                cout << ' ';
                                width++;
                            }
                            cout << j;
                        }
                    } else if (j == 0) {
                        width = log10(i) + 1;
                        while (maxWidth > width) {
                            cout << ' ';
                            width++;
                        }
                        cout << i << ' ';
                    } else {
                        width = log10(i * j) + 1;
                        while (maxWidth > width) {
                            cout << ' ';
                            width++;
                        }
                        cout << i * j << ' ';
                    }
                }
                cout << endl;
            }
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
