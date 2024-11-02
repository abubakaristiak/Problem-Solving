//https://codeforces.com/contest/1974/problem/B
// Problem 12

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
        string s;
        cin >> s;
        set<char> st;
        for(int i=0; i<n; i++){
            st.insert(s[i]);
        }
        map<char, char> mp;
        auto rit = st.rbegin();
        for(auto it=st.begin(); it!=st.end(); it++){
            mp[*it]=*rit;
            rit++;
        }
        for(int i=0; i<n; i++){
            cout << mp[s[i]];
        }
        cout << endl;
    }
    
    return 0;
}