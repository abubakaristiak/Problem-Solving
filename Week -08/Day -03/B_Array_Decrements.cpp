/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-19 || 23:54:52
 * * * * File    : B_Array_Decrements.cpp
 */



// https://codeforces.com/problemset/problem/1690/B
// Problem 03



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
        vector<int> arr1(n), arr2(n);
        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }
        for(int i=0; i<n; i++){
            cin >> arr2[i];
        }
        
        int diff=-1, zero_diff=-1;
        bool flag=false;

        for(int i=0; i<n; i++){
            if(arr1[i]<arr2[i]){
                flag=true;
                break;
            }
            if(arr2[i]!=0){
                if(diff==-1){
                    diff=arr1[i]-arr2[i];
                }else{
                    if(arr1[i]-arr2[i] !=diff){
                        flag=true;
                        break;
                    }
                }
            }
            else zero_diff=max(zero_diff, arr1[i]-arr2[i]);
        }

        if(flag){
            no; 
            continue;
        }

        if(diff==-1 || zero_diff<=diff){
            yes;
        }else no;


    }
    
    return 0;


// Alhamdulillah
}