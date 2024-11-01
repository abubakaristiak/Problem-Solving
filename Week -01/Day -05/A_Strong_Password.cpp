// https://codeforces.com/problemset/problem/1997/A
// Problem 11

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        bool track = true;
        for (int i = 0; i < n - 1; i++)
        {
            cout << s[i];
            if (s[i] == s[i + 1] && track)
            {
                track = false;
                if (s[i] == 'a')
                    cout << 'b';
                else cout << 'a';
            }
        }
        cout << s[n-1];
        if(track){
            if(s[n-1]=='a') cout << 'b';
            else cout << 'a';
        }cout << endl;
    }

    return 0;
}