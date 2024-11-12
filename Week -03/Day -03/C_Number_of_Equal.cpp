/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 08:30:36
 * * * * File    : C_Number_of_Equal.cpp
 */

// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
// problem 03

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
    int n,m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int l=0, r=0;
    ll ans=0;
    while(l<n && r<m){
        int cur=a[l], cnt1=0, cnt2=0;
        while(l<n && a[l]==cur){
            cnt1++;
            l++;
        }
        while (r<m && cur>b[r]){
            r++;
        }
        while (r<m && b[r]==cur){
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}
