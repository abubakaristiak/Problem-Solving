// https://codeforces.com/problemset/problem/2049/B


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n; // Length of the string
    string s;
    cin >> s; // The string itself

    vector<int> a(n, -1); // Array to assign numbers
    int cur = 1;

    // Assign numbers backward when 'p' is encountered or at the end
    for (int i = 0; i < n; i++) {
        if (s[i] != 'p' && i + 1 < n)
            continue;

        int j = i;
        while (j >= 0 && a[j] == -1) {
            a[j] = cur;
            cur++;
            j--;
        }
    }

    // Validate for 's'
    bool isValid = true;
    int maxValue = 0;

    for (int i = n - 1; i >= 0; i--) {
        maxValue = max(maxValue, a[i]);
        if (s[i] == 's') {
            int lengthFromEnd = n - i;
            if (lengthFromEnd != maxValue) {
                isValid = false;
                break;
            }
        }
    }

    // Print result for this test case
    cout << (isValid ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; // Number of test cases
    while (T--) {
        solve();
    }

    return 0;
}
