/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-10 || 22:43:50
 * * * * File    : Range_Minimize.cpp
 */

// https://www.codechef.com/problems/MNR
// Problem B;


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
        int n; cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        asort(v);
        int a=v[n-1]-v[2];
        int b=v[n-2]-v[1];
        int c=v[n-3]-v[0];
        int mn = min(min(a,b),c);
        cout << mn << endl;
    }
    
    return 0;
}