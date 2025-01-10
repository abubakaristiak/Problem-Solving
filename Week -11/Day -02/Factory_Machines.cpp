/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-10 || 21:43:41
 * * * * File    : Factory_Machines.cpp
 */


// https://cses.fi/problemset/task/1620



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
    int n,k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }


    auto ok = [&](ll seconds){
        ll cnt=0;
        for(int i=0; i<n; i++){
            cnt+=(seconds/v[i]);
            if(cnt>=k){
                return true;
            }
        }
        return false;
    };

    ll l=1, r=1e18, mid, ans;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout << ans << endl;
    
    return 0;


// Alhamdulillah
}