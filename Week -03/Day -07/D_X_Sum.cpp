/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 10:25:00
 * * * * File    : D_X_Sum.cpp
 */


// https://codeforces.com/problemset/problem/1676/D
// Problem J;

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
        int n, m; cin >> n >> m;
        int mat[n][m];
        // vector<vector<ll>> mat(n, vector<ll> (m,0));
        ll mx=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ll tmpSum=0;
                tmpSum+=mat[i][j];

                // 1st direction move
                ll tmp_i=i-1, tmp_j=j-1;
                while(tmp_i>=0 && tmp_j>=0){
                    tmpSum+=mat[tmp_i][tmp_j];
                    tmp_i--, tmp_j--;
                }

                // 2nd direction move;
                tmp_i=i-1, tmp_j=j+1;
                while (tmp_i>=0 && tmp_j<m){
                    tmpSum+=mat[tmp_i][tmp_j];
                    tmp_i--, tmp_j++;
                }

                // 3rd dirction move;
                tmp_i=i+1, tmp_j=j-1;
                while (tmp_i<n && tmp_j>=0){
                    tmpSum+=mat[tmp_i][tmp_j];
                    tmp_i++, tmp_j--;
                }

                // 4th direction move;
                tmp_i=i+1, tmp_j=j+1;
                while (tmp_i<n && tmp_j<m){
                    tmpSum+=mat[tmp_i][tmp_j];
                    tmp_i++, tmp_j++;
                }

                mx=max(mx, tmpSum);
            }
        }
        cout << mx << endl;
    }
    return 0;

 // Alhamdulillah
}