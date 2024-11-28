/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-28 || 12:53:19
 * * * * File    : B_Matrix_of_Differences.cpp
 */


// https://codeforces.com/problemset/problem/1783/B
// Problem H;

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
        ll largest=n*n, smallest=1;
        ll arr[n+1][n+1];
        int idx=1;
        for(int i=1; i<=n; i++){
            if(i%2==1){
                for(int j=1; j<=n; j++){
                    if(idx%2==1){
                        arr[i][j]=smallest;
                        smallest++;
                    }else{
                        arr[i][j]=largest;
                        largest--;
                    }
                    idx++;
                }
            }else{
                for(int j=n; j>=1; j--){
                    if(idx%2==1){
                        arr[i][j]=smallest;
                        smallest++;
                    }else{
                        arr[i][j]=largest;
                        largest--;
                    }
                    idx++;
                }
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    
    
    }
    
    return 0;


// Alhamdulillah
}