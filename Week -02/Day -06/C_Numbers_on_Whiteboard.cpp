/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-08 || 19:05:28
 * * * * File    : C_Numbers_on_Whiteboard.cpp
 */

// https://codeforces.com/problemset/problem/1430/C
// Problem 10;

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
        cout << "2" << endl;
        ll last=n;
        ll second_last=n-1;
        for(int i=n-1; i>=1; i--){
            cout << last << " " << second_last << endl;
            last=(last+second_last+1)/2;
            second_last--;
        }
    }
    
    return 0;
}

