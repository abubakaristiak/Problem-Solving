/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-03 || 23:13:18
 * * * * File    : A_Little_Nikita.cpp
 */



// https://codeforces.com/problemset/problem/1977/A
// Problem C;



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
        int n, m; cin >> n >> m;
        if(n>=m){
            int diff=n-m;
            if(diff%2==0){
                cyes;
            }else cno;
        }
        else cno;
    }
    
    return 0;


// Alhamdulillah
}