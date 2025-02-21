#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int_in(x) scanf("%d", &x)
#define int_out(x) printf("%d", x)
#define nl printf("\n")

int main() {
    Faster;
    int t;
    int_in(t);
    while (t--) {
        int n;
        int_in(n);
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            int_in(a[i]);
        }

        map<int, int> freq;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            if (freq[a[i]] > 2) {
                ans = a[i];
            }
        }

        int_out(ans);
        nl;
    }
    return 0;
}
