/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-30 || 21:02:18
 * * * * File    : A_Rudolf_and_the_Ticket.cpp
 */


// https://codeforces.com/problemset/problem/1941/A



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


void solve()
{
    int n,m,k; cin >> n >> m >> k;

    vector<int> first(n);
    vector<int> second(m);

    for(int i=0; i<n; i++){
        cin >> first[i];
    }

    for(int i=0; i<m; i++){
        cin >> second[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(first[i]+second[j]<=k){
                cnt++;
            }
        }
    }
    cout << cnt << endl;


}


int main()
{
    fast();
    int t; cin >>t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}