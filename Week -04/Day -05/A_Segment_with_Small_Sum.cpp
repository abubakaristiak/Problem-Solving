/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-21 || 07:51:34
 * * * * File    : A_Segment_with_Small_Sum.cpp
 */


// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
// Problem 01;


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


    ll l=0, r=0, max_len=0;
    ll sum=0;
    while (r<n)
    {
        sum+=v[r];
        if(sum<=s){
            max_len= max(max_len, r-l+1);

        }else{
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout << max_len << endl;
    return 0;


// Alhamdulillah
}