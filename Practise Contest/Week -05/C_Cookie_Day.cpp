/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-25 || 23:18:58
 * * * * File    : C_Cookie_Day.cpp
 */

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
        int n, child; cin >> n >> child;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int mn=INT_MAX;
        bool valid=false;
        vector<int> res(n);
        for(int i=0; i<n; i++){
            if(v[i]>=child){
                valid=true;
                int w=v[i]%child;
                mn=min(mn,w);
            }
        }
        if(valid){
            cout << mn << endl;
        }else cout << -1 << endl;
    }
    return 0;


// Alhamdulillah
}