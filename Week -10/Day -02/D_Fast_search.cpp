/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-05 || 21:26:05
 * * * * File    : D_Fast_search.cpp
 */



// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
// Problem 05



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    asort(v);

    ll q; cin >> q;
    while (q--)
    {
        ll l,r; cin >> l >> r;
        
        ll leftCnt = lower_bound(v.begin(), v.end(),l)-v.begin();
        ll rightCnt = upper_bound(v.begin(), v.end(),r)-v.begin();
        ll res=(rightCnt - leftCnt);
        cout << res << " ";

    }
    
    return 0;


// Alhamdulillah
}