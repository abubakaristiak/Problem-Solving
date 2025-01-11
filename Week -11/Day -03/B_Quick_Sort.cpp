/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-11 || 23:22:18
 * * * * File    : B_Quick_Sort.cpp
 */


// https://codeforces.com/problemset/problem/1768/B



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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(is_sorted(v.begin(), v.end())){
            cout << 0 << endl;
            continue;
        }

        int orderCnt=0;
        for(int i=0; i<n; i++){
            if(v[i]==orderCnt+1){
                orderCnt++;
            }
        }

        int remainingCnt=n-orderCnt;
        int ans = (remainingCnt+k-1)/k;
        cout << ans << endl;
    }
    
    return 0;


// Alhamdulillah
}