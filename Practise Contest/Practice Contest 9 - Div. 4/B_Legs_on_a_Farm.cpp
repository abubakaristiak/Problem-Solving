/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-21 || 22:14:49
 * * * * File    : B_Legs_on_a_Farm.cpp
 */




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


void solve()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        int crows = n/4;
        int remain = n-(crows*4);
        int chickens = remain/2;
        cout << (crows+chickens) << endl;
    }
    
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}