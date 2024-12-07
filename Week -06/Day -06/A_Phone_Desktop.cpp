/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-07 || 17:01:44
 * * * * File    : A_Phone_Desktop.cpp
 */


// https://codeforces.com/problemset/problem/1974/A
// Problem B;


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
        int x,y; cin >> x >> y;
        int ans=(y+1)/2, cnt=0;
        if(y%2==1){
            cnt=(y/2)*7+11;
        }else{
            cnt=(y/2)*7;
        }
        if(x<=cnt){
            cout << ans << endl;
        }else{
            int remaining=x-cnt;
            cout << ans+(remaining+14)/15 << endl;
        }
    }
    
    return 0;


// Alhamdulillah
}