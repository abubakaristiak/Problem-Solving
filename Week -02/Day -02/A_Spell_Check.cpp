//https://codeforces.com/problemset/problem/1722/A
// Problem D;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string valid="Timur";
        sort(valid.begin(), valid.end());
        string s; cin >> s;
        sort(s.begin(), s.end());
        if(n!=5){
            cout << "NO" << endl;
            continue;
        }

        if(s==valid) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}