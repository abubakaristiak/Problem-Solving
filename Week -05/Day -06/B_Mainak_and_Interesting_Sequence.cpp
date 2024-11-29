/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-29 || 11:30:26
 * * * * File    : B_Mainak_and_Interesting_Sequence.cpp
 */


// https://codeforces.com/problemset/problem/1726/B
// Problem 6;



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        if(n>m){
            no;
            continue;
        }
        vector<int> res(n+1);
        ll sum=0;
        if(n%2==0 && m%2==0){
            yes;
            for(int i=1; i<=n-2; i++){
                res[i]=1;
                sum++;
            }
            res[n-1]=(m-sum)/2;
            res[n]=res[n-1];
        }
        else if(n%2==1 && m%2==0){
            yes;
            for(int i=1; i<=n-1; i++){
                res[i]=1;
                sum++;
            }
            res[n]=(m-sum);
        }
        else if(n%2==0 && m%2==1){
            no;
            continue;
        }
        else if(n%2==1 && m%2==1){
            yes;
            for(int i=1; i<=n-1; i++){
                res[i]=1;
                sum++;
            }
            res[n]=(m-sum);
        }
        for(int i=1; i<=n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;


// Alhamdulillah
}
