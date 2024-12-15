/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-15 || 15:44:54
 * * * * File    : C_Increasing_Sequence_with_Fixed_OR.cpp
 */

// https://codeforces.com/problemset/problem/1988/C



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
        ll n; cin >> n;
        deque<ll> ans;
        for(int k=0; k<=__lg(n); k++){
            if((n>>k) & 1){
                ll value=n-(1LL<<k);
                if(value>0){
                    ans.push_front(value);
                }
            }
        }
        ans.push_back(n);
        cout << ans.size() << endl;
        for(auto value:ans){
            cout << value << " ";
        }
        cout << endl;
    }
    
    return 0;


// Alhamdulillah
}