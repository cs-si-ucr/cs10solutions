#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int count = 0;
    int maxSize  = 0;
    cout << "How many buildings? ";
    cin >> count;
    cout << "How tall is the tallest building? ";
    cin >> maxSize;

    for (int i = 0; i < count; ++i) {
        int height = rand() % maxSize + 1;
        for (int j = 0; j < height; ++j) {
            cout << 'X';
        }
        cout << endl;
    }
    
    return 0;
}
