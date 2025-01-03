/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-03 || 17:08:40
 * * * * File    : A_Binary_Search.cpp
 */



// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
// Problem 01;


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
    int n,k; cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    while (k--)
    {
        int x; cin >> x;
        int l=0, r=n-1, mid;
        bool flag=false;


        while (l<=r){
            mid=(l+r)/2;
            if(x==v[mid]){
                flag=true;
                break;
            }
            else if(x<v[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }


        if(flag){
            yes;
        }else no;
        
    }
    
    return 0;


// Alhamdulillah
}