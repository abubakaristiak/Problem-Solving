/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-01 || 15:20:24
 * * * * File    : F_3_SUM.cpp
*/



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
    map<int, int> mp;
    int ar[3];
    for(int i=0; i<n; i++){
        cin >> ar[i];
        int val=ar[i]%10;
        mp[val]++;
    }
    int ans=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                int a=-1, b=-1, c=-1;
                if(mp[i]!=0){
                    a=1;
                    mp[i]--;
                }
                if(mp[j]!=0){
                    b=1;
                    mp[j]--;
                }
                if(mp[k]!=0){
                    c=1;
                    mp[k]--;
                }
                if(a==1 && b==1 && c==1){
                    int sum=i+j+k;
                    if(sum%10==3){
                        ans=1;
                        break;
                    }
                }
                if(a==1){
                    mp[i]++;
                }
                if(b==1){
                    mp[j]++;
                }
                if(c==1){
                    mp[k]++;
                }

            }
        }
    }
    if(ans==1){
        yes;
    }else no;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}