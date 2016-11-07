#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int count = 0;
    int a, b;
    cout << "How many random numbers would you like? ";
    cin >> count;
    cout << "What range should the numbers be in (space-separated)? ";
    cin >> a >> b;

    cout << "Your random numbers are:" << endl;

    for (int i = 0; i < count; ++i) {
        cout << rand() % (b - a + 1) + a << endl;
    }
    
    return 0;
}
