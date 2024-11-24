/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 13:28:11
 * * * * File    : Longest Sub-Array with Sum K.cpp
 */


// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
// Problem 11;


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
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        map<int, int> mp;
        int sum=0, mxlen=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==k){
                mxlen=max(mxlen, i+1);
            }
            int rem=sum-k;
            if(mp.find(rem)!=mp.end()){
                int len = i-mp[rem];
                mxlen=max(mxlen, len);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return mxlen;
    }
};