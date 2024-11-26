/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 15:02:26
 * * * * File    : B_Preparing_for_the_Contest.cpp
 */


// https://codeforces.com/problemset/problem/1914/B
// Problem D;


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define enter cout << endl
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        for(int i=n-k; i<=n; i++){
            cout << i << " ";
        }
        for(int i=n-k-1; i>=1; i--){
            cout << i << " ";
        }
        enter; 
    }
    
    return 0;


// Alhamdulillah
}