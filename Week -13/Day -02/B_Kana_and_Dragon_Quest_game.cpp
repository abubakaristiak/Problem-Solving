/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-30 || 23:02:51
 * * * * File    : B_Kana_and_Dragon_Quest_game.cpp
 */



// https://codeforces.com/problemset/problem/1337/B



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
    int x,n,m; cin >> x >> n >> m;
    while (n>0 && x>20)
    {
        x=x/2+10;
        n--;
    }
    x-=m*10;
    if(x<=0){
        yes;
    }else no;
    
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}