/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-14 || 19:34:40
 * * * * File    : D_1_D_Eraser.cpp
 */

// https://codeforces.com/contest/1873/problem/D
// Problem 7;

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
        int i=0, cnt=0;
        while (i<n)
        {
            if(s[i]=='B'){
                i=i+k;
                cnt++;
            }else{
                i++;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}