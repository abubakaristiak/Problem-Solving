/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-28 || 12:05:09
 * * * * File    : A_We_Need_the_Zero.cpp
 */


// https://codeforces.com/problemset/problem/1805/A
// Problem 3;


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
        int Xor=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            Xor^=v[i];
        }
        for(int i=0; i<n; i++){
            v[i]^=Xor;
        }
        int Yor=0;
        for(int i=0; i<n; i++){
            Yor^=v[i];
        }
        if(Yor==0){
            cout << Xor << endl;
        }else cout << -1 << endl;
    }
    
    return 0;


// Alhamdulillah
}