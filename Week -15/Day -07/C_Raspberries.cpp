/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-10 || 15:27:20
 * * * * File    : C_Raspberries.cpp
*/


// https://codeforces.com/problemset/problem/1883/C


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    ll n,k; cin >> n >> k;
    ll evenCnt=0, ans=k;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        if(x%2==0){
            evenCnt++;
        }
        if(x%k==0){
            ans=0;
        }
        ans=min(ans, k-x%k);
    }

    if(k==4){
        if(evenCnt>=2){
            ans=0;
        }else if(evenCnt==1){
            ans=min(ans,1LL);
        }else{
            ans=min(ans,2LL);
        }
    }
    cout << ans << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah---(Ramadan Kareem)
}