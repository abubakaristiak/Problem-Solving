//https://codeforces.com/contest/855/problem/A
// Problem 10

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    set<string> st;

    while (n--)
    {
        string s; 
        cin >> s; 
        if(st.find(s)!=st.end()){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        st.insert(s);

    }
    
    return 0;
}