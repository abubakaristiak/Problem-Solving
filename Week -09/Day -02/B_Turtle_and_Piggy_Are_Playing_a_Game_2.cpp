/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-24 || 23:47:34
 * * * * File    : B_Turtle_and_Piggy_Are_Playing_a_Game_2.cpp
 */


// https://codeforces.com/problemset/problem/2003/B
// Problem A;



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
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll ar[n];

        for(int i=1; i<=n; i++){
            cin >> ar[i];
        }

        sort(ar+1, ar+n+1);
        cout << ar[n/2+1] << endl;
    }
    
    return 0;


// Alhamdulillah
}