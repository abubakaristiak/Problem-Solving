/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-21 || 00:16:51
 * * * * File    : B_3_palindrome.cpp
 */



// https://codeforces.com/problemset/problem/805/B
// Problem E;

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
    int n; cin >> n;
    string res="";
    string p="aabb";

    for(int i=0; i<n; i++){
        res+=p[i%4];
    }

    cout << res << endl;
    return 0;


// Alhamdulillah
}