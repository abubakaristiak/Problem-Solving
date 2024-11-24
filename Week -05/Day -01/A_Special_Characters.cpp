/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 21:41:30
 * * * * File    : A_Special_Characters.cpp
 */


// https://codeforces.com/problemset/problem/1948/A
// Problem A;


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
        if(n%2==1){
            no;
            continue;
        }
        char ch='A';
        string ans="";
        while (n)
        {
            ans+=ch;
            ans+=ch;
            ch++;
            n-=2;
        }
        yes;
        cout << ans << endl;
    }
    return 0;


// Alhamdulillah
}