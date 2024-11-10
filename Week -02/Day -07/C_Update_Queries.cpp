/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-10 || 10:20:31
 * * * * File    : C_Update_Queries.cpp
 */

// https://codeforces.com/problemset/problem/1986/C
// Problem: 13

#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
        string s; cin >> s;
        set<int> st;
        for(int i=0; i<m; i++){
            int x; cin >> x;
            st.insert(x);
        }
        string c; cin >> c;
        asort(c);
        int idx=0;
        for(auto it:st){
            s[it-1]=c[idx];
            idx++;
        }
        cout << s << endl;
    }
    
    return 0;
}