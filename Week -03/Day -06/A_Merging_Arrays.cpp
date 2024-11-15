/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 22:30:46
 * * * * File    : A_Merging_Arrays.cpp
 */

// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
// Problem 8;


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
    int n,m; cin >> n >> m;
    vector<int> v1(n);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    vector<int> v2(m);
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }

    vector<int> res;
    int l=0,r=0;
    while (l<n && r<m)
    {
        if(v1[l]<=v2[r]){
            res.push_back(v1[l]);
            l++;
        }else{
            res.push_back(v2[r]);
            r++;
        }
    }
    while (l<n)
    {
        res.push_back(v1[l]);
        l++;
    }
    while (r<m)
    {
        res.push_back(v2[r]);
        r++;
    }
    
    for(auto &val:res){
        cout << val << " ";
    }
    cout << endl;
    
    
    return 0;
}