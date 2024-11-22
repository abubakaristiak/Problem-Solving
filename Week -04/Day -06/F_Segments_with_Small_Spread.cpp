/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-22 || 09:24:19
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
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int l=0, r=0;
    ll ans=0;
    multiset<ll> ml;
    while(r<n){
        ml.insert(a[r]);
        ll mn=*ml.begin(), mx=*ml.rbegin();
        if(mx-mn<=k){
            ans+=(r-l+1);
        }else{
            while(l<=r){
                mn=*ml.begin(), mx=*ml.rbegin();
                if(mx-mn<=k) break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn=*ml.begin(), mx=*ml.rbegin();
            if(mx-mn<=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;


// Alhamdulillah
}