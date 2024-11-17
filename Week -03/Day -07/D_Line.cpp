/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 12:34:08
 * * * * File    : D_Line.cpp
 */


// https://codeforces.com/problemset/problem/1722/D
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
        string s; cin >> s;
        vector<ll> dispatch;

        ll total=0;
        int miniumChange=0;
        for(int i=0; i<n; i++){
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L'){
                if(R>L){
                    miniumChange++;
                    total+=R;
                    dispatch.push_back(R-L);
                }
                else{
                    total+=L;
                }
            }else{
                if(L>R){
                    miniumChange++;
                    dispatch.push_back(L-R);
                    total+=L;
                }else{
                    total+=R;
                }
            }
        }
        vector<ll> ans(n+1);
        for(int i=miniumChange; i<=n; i++){
            ans[i]=total;
        }

        rsort(dispatch);
        for(int i=miniumChange-1; i>=1; i--){
            total-=dispatch.back();
            dispatch.pop_back();
            ans[i]=total;
        }


        for(int i=1; i<=n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }  
    return 0;


 // Alhamdulillah
}