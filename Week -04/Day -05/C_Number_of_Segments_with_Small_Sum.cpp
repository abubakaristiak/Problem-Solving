/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-21 || 10:22:51
 * * * * File    : C_Number_of_Segments_with_Small_Sum.cpp
 */


// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
// Problem 03;

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
    ll n, k; 
    cin >> n >> k;
    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    ll l=0, r=0;
    ll sum=0, ans=0;
    while (r<n)
    {
        sum+=ar[r];
        if(sum<=k){
            ans+=(r-l+1);
        }else{
            while (sum>k && l<=r)
            {
                sum-=ar[l];
                l++;
            }
            if(sum<=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;


// Alhamdulillah
}