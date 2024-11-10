/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-09 || 18:48:49
 * * * * File    : B_1_The_Strict_Teacher_Easy_Version.cpp
 */

// https://codeforces.com/problemset/problem/2005/B1


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
    ll t; cin >> t;
    while (t--)
    {
        ll n,m,q; cin >> n >> m >> q;
        int t1,t2; cin >> t1 >> t2;
        if(t1>t2) swap(t1,t2);

        int d; cin >> d;
        if(d<t1){
            cout << t1-1 << endl;
            continue;
        }
        if(d>t2) {
            cout << n-t2 << endl;
            continue;
        }
        int mid=(t1+t2)/2;
        int t1_move = abs(mid-t1);
        int t2_move = abs(mid-t2);
        cout << min(t1_move, t2_move) << endl;
    }
    
    return 0;
}