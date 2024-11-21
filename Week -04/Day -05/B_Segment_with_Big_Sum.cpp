/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-21 || 08:21:51
 * * * * File    : B_Segment_with_Big_Sum.cpp
 */


// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
// Problem 02;



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
    ll n, s; cin >> n >> s;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }


    ll l=0, r=0, min_len=INT_MAX;
    ll sum=0;
    while (r<n)
    {
        sum+=v[r];
        while (sum>=s)
        {
            min_len=min(min_len, r-l+1);
            sum-=v[l];
            l++;
        }
        r++;
        
    }
    cout << (min_len==INT_MAX ? -1:min_len) << endl;
    return 0;


// Alhamdulillah
}