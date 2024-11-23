/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 00:46:56
 * * * * File    : E_Segments_with_Small_Set.cpp
 */


// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
// Problem 5;


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
    ll cnt=0, unique_cnt=0;
    map<int, int> mp;
    while (r<n)
    {
        mp[v[r]]++;
        if(mp[v[r]]==1){
            unique_cnt++;
        }
        while (unique_cnt>k)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0){
                unique_cnt--;
            }
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    cout << cnt << endl;
    
    return 0;


// Alhamdulillah
}