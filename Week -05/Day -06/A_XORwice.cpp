/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-28 || 16:56:42
 * * * * File    : A_XORwice.cpp
 */


// https://codeforces.com/problemset/problem/1421/A
// Problem 4;


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
        int a, b; cin >> a >> b;
        int Xor=a^b;
        cout << Xor << endl;
    }
    
    return 0;


// Alhamdulillah
}