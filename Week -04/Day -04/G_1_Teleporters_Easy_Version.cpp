/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-20 || 20:17:18
 * * * * File    : G_1_Teleporters_Easy_Version.cpp
 */


// https://codeforces.com/problemset/problem/1791/G1
// Problem H;

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
        ll n,c; cin >> n >> c;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            v[i]=v[i]+i+1;
        }
        asort(v);
        ll sum=0, cnt=0;
        for(int i=0; i<n; i++){
            sum+=v[i];
            if(sum>c){
                break;
            }
            cnt++;
        }
        cout << cnt << endl;

    }
    return 0;


// Alhamdulillah
}