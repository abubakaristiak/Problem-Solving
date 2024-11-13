/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-13 || 20:19:54
 * * * * File    : C_Premutation.cpp
 */

// https://codeforces.com/problemset/problem/1790/C

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
        int mat[n][n-1];
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin >> mat[i][j];
            }
        }

        map<int, int> mp;
        map<int, int> idx;
        for(int i=0; i<n; i++){
            mp[mat[i][n-2]]++;
            idx[mat[i][n-2]]=i;
        }
        int index,val;
        for(auto [x,y]:mp){
            if(y==1) index=x;
            else val=x;
        }
        for(int i=0; i<n-1; i++){
            cout << mat[idx[index]][i] << " ";
        }
        cout << val << endl;
    }
    
    return 0;
}