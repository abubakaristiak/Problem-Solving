/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-15 || 18:44:05
 * * * * File    : C_Maximum_Median.cpp
 */



// https://codeforces.com/problemset/problem/1201/C



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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    auto ok=[&](int median){
        ll cnt=0;
        for(int i=(n/2); i<n; i++){
            cnt+=(a[i]<median ? (median-a[i]) : 0);
        }
        return cnt<=k;
    };

    asort(a);
    int l=1, r=2e9, mid, ans;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout << ans << endl;
    
    return 0;


// Alhamdulillah
}