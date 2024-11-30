/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-30 || 12:06:54
 * * * * File    : B_Battle_for_Survive.cpp
 */


// https://codeforces.com/problemset/problem/2013/B
// Problem L;


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
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        ll totalSum=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            totalSum+=v[i];
        }
        ll res=totalSum-(2*v[n-2]);
        cout << res << endl;
        
    }
    return 0;
// Alhamdulillah
}