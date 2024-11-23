/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 01:13:34
 * * * * File    : F_Segments_with_Small_Spread.cpp
 */


// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
// Problem 6;


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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    ll l=0, r=0;
    ll cnt=0;
    multiset<ll> ml;
    while(r<n){
        ml.insert(v[r]);
        while (*ml.rbegin() - *ml.begin()>k)
        {
            ml.erase(ml.find(v[l]));
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    cout << cnt << endl;
    return 0;


// Alhamdulillah
}