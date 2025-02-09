/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-09 || 13:00:10
 * * * * File    : E_String_Reversal.cpp
*/


// https://codeforces.com/problemset/problem/1430/E


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin >> n;    
    string s; cin >> s;
    string r=s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> pos_s, pos_r;
    for(int i=0; i<n; i++){
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);

    }
    vector<int> prem(n);
    for(char ch='a'; ch<='z'; ch++){
        for(int i=0; i<pos_s[ch].size(); i++){
            prem[pos_r[ch][i]]=pos_s[ch][i];
        }
    }

    pbds<int> p;
    ll ans=0;
    for(int i=n-1; i>=0; i--){
        ans+=p.order_of_key(prem[i]);
        p.insert(prem[i]);
    }
    cout << ans << endl;
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}