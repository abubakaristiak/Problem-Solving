#include <bits/stdc++.h>
using namespace std;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

int main() {
    fast();

    int n = 4;  // Power of 2^4
    int range = (1 << n); // Calculate 2^4 = 16

    for (int mask = 0; mask < range; mask++) {
        cout << mask << " -> ";
        for (int k = n - 1; k >= 0; k--) { // Iterate over bits from MSB to LSB
            if ((mask >> k) & 1) { // Check if the k-th bit is set
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
