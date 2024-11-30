/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-30 || 15:01:55
 * * * * File    : B_Array_Cloning_Technique.cpp
 */


// https://codeforces.com/problemset/problem/1665/B
// Problem M;



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
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int cnt=0;
        for(auto val:mp){
            cnt=max(cnt, val.second);
        }
        int op=0;
        while(cnt<n){
            op++;
            int swapCnt=min(n-cnt, cnt);
            op+=swapCnt;
            cnt=swapCnt+cnt;
        }
        cout << op << endl;
    }
    
    return 0;


// Alhamdulillah
}
