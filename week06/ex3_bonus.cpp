#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int mod      = 6947;
    int shift    = 27;
    int exponent = 3;
    unsigned long long seed = time(0) % mod;
    int count    = 0;
    cout << "How many random numbers would you like? ";
    cin >> count;

    for (int i = 0; i < count; ++i) {
        seed += shift;
        seed = static_cast<unsigned long long>(pow(seed, exponent)) % mod;
        cout << seed << endl;
    }

    return 0;
}
