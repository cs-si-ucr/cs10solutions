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

            int width;
            cout << "Enter the diamond width: ";
            cin >> width;

            for (int i = 0; i < 2 * width - 1; ++i) {
                int spaces = abs(width-1-i);
                int stars  = 2 * (width - spaces) - 1;
                for (int j = 0; j < spaces; ++j) {
                    cout << ' ';
                }
                for (int j = 0; j < stars;  ++j) {
                    cout << '*';
                }
                cout << endl;
            }
        } else if (choice == 5) {
            cout << "Executing exercise 5..." << endl;

            double input;
            int base;
            int fact = 1;
            bool gotInput = false;

            do {
                if (gotInput) {
                    cout << "Error: Invalid Input!" << endl;
                }
                cout << "Enter a number to take the factorial of: ";
                cin >> input;
                base = input;
                gotInput = true;
            } while (base < 0 || input != base);

            int fact_initial;
            for (int i = 1; i < base; ++i) {
                fact_initial = fact;
                for (unsigned j = 0; j < base - i; ++j) {
                    fact += fact_initial;
                }
            }
            cout << base << "! = " << fact << endl;
        } else if (choice == 6) {
            exit = true;
        }
    } while (!exit);
    cout << "Goodbye!" << endl;

    return 0;
}
