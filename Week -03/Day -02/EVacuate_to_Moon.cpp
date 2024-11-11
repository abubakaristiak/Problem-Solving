/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 18:27:54
 * * * * File    : EVacuate_to_Moon.cpp
 */

// https://www.codechef.com/problems/MOONSOON
// Problem E;


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
    int t; cin >> t;
    while (t--)
    {
        int n, m, h; cin >> n >> m >> h;
        vector<int> a(n), b(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        rsort(a);
        rsort(b);
        ll ans=0;
        for(int i=0; i<min(n,m); i++){
            ans+=min(1LL*b[i]*h, 1LL*a[i]);
        }
        cout << ans << endl;


    }
    
    return 0;
}