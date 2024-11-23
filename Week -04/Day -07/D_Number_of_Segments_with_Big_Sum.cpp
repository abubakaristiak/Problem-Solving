/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-23 || 23:23:46
 * * * * File    : D_Number_of_Segments_with_Big_Sum.cpp
 */


// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
// Problem 4;



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

int main() {
    ll n, s; 
    cin >> n >> s;
    vector<ll> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll l=0,r=0;
    ll sum=0, cnt=0;

    while (r<n)
    {
        sum+=a[r];
        while (sum>=s)
        {
            cnt+=n-r;
            sum-=a[l];
            l++;
        }
        r++;
        
    }
    cout << cnt << endl;
    return 0;
}
