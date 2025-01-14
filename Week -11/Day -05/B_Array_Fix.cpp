/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-14 || 22:11:47
 * * * * File    : B_Array_Fix.cpp
 */


// https://codeforces.com/problemset/problem/1948/B



#include<bits/stdc++.h>
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

using namespace std;
int main()
{
    fast();
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        } 

        int mx=1e10;
        bool flag=true;

        for(int i=n-1; i>=0; i--){
            if(ar[i]<=mx){
                mx=min(mx, ar[i]);
            }else{
                vector<int> digits;
                int num=ar[i];
                while (num>0)
                {
                    digits.push_back(num%10);
                    num/=10;
                }
                for(int j=0; j<digits.size(); j++){
                    if(digits[j]>mx){
                        no; 
                        flag=false;
                        break;
                    }else{
                        mx=min(mx, digits[j]);
                    }
                }  
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            yes;
        }
    }
    
    return 0;


// Alhamdulillah
}