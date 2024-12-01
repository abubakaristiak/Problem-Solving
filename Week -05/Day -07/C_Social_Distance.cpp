/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-01 || 16:48:15
 * * * * File    : C_Social_Distance.cpp
 */


// https://codeforces.com/problemset/problem/1367/C
// Problem O;


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
        int n,k; cin >> n >> k;
        string s; cin >> s;
        set<int> st;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                st.insert(i);
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                auto it=st.lower_bound(i-k);
                if(it==st.end() || *it>i+k){
                    cnt++;
                    s[i]='1';
                    st.insert(i);
                }
            }
        }
        cout << cnt << endl;
    }
    
    return 0;


// Alhamdulillah
}