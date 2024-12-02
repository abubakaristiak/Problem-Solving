/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-02 || 14:06:05
 * * * * File    : A_Bazoka_and_Mocha_s_Array.cpp
 */


// https://codeforces.com/problemset/problem/1975/A
// Problem A;


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
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int mn=v[0], idx=n;
        vector<int> temp;
        temp.push_back(v[0]);
        for(int i=1; i<n; i++){
            if(mn<=v[i]){
                mn=v[i];
                temp.push_back(mn);
            }else{
                idx=i;
                break;
            }
        }

        vector<int> res;
        for(int i=idx; i<n; i++){
            res.push_back(v[i]);
        }
        for(int i=0; i<temp.size(); i++){
            res.push_back(temp[i]);
        }
        if(is_sorted(res.begin(), res.end())){
            yes;
        }else no;

    }
    
    return 0;


// Alhamdulillah
}