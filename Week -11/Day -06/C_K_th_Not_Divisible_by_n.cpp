/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-15 || 20:16:37
 * * * * File    : C_K_th_Not_Divisible_by_n.cpp
 */



// https://codeforces.com/problemset/problem/1352/C



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
    
    int t; cin >> t; 
    while (t--)
    {
        int n,k; cin >> n >> k;


        auto ok=[&](int mid){
            return (mid-(mid/n))>=k;
        };

        int l=1, r=2e9, mid, ans;
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
        
    }
    
    return 0;


// Alhamdulillah
}