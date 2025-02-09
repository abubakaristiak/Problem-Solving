/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-09 || 11:25:41
 * * * * File    : Sliding_Window_Median.cpp
*/


// https://cses.fi/problemset/task/1076


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
    int n,k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l=0,r=0;
    pbds<pair<int, int>> p;
    while (r<n)
    {
        p.insert({v[r],r});
        if(r-l+1==k){
            int pos=k/2;
            if(k%2==0){
                pos--;
            }
            auto it=p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({v[l],l});
            l++;
        }
        r++;
    }
    cout << endl;
    

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