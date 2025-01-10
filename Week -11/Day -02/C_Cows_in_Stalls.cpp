/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-10 || 21:22:01
 * * * * File    : C_Cows_in_Stalls.cpp
 */


// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C



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

    asort(v);

    auto ok = [&](ll dis){
        int cnt=1;
        ll pos=v[0];
        for(int i=1; i<n; i++){
            if(v[i]-pos>=dis){
                cnt++;
                pos=v[i];
            }
            if(cnt>=k){
                return true;
            }
        }
        return false;
    };


    ll l=1, r=v[n-1], mid, ans;
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