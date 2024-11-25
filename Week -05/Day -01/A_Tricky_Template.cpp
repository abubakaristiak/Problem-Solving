/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-25 || 19:20:36
 * * * * File    : A_Tricky_Template.cpp
 */


// https://codeforces.com/problemset/problem/1922/A
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
        string a, b, c; cin >> a >> b >> c;
        bool track=false;
        for(int i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                track=true;
                break;
            }
        }
        if(track) yes;
        else no;
    }
    
    return 0;


// Alhamdulillah
}