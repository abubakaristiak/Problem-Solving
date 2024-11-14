/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-14 || 19:54:08
 * * * * File    : D_Black_and_White_Stripe.cpp
 */


// https://codeforces.com/problemset/problem/1690/D
// Problem 6;


#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
    fast();
    
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        string s; cin >> s;
        int cnt=0;
        for(int i=0; i<k; i++){
            if(s[i]=='W') cnt++;
        }
        int ans=cnt;
        for(int i=k; i<n; i++){
            if(s[i]=='W') cnt++;
            if(s[i-k]=='W') cnt--;
            ans=min(ans, cnt);
        }
        cout << ans << endl;
    }
    
    return 0;
}
