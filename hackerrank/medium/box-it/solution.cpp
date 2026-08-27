#include <iostream>
using namespace std;

int main() {
    unsigned int N, S, P, Q;
    cin >> N >> S >> P >> Q;

    const unsigned int MASK = 0x7FFFFFFF;
    const int SIZE = 1 << 26;

    static unsigned int bits[SIZE];

    unsigned int count = 0;
    unsigned int x = S;

    for (unsigned int i = 0; i < N; i++) {
        unsigned int index = x >> 5;
        unsigned int bit = 1u << (x & 31);

        if (!(bits[index] & bit)) {
            bits[index] |= bit;
            count++;
        }

        x = (x * P + Q) & MASK;
    }

    cout << count;

    return 0;
}
