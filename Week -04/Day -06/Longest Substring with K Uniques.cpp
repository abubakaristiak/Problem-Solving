/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-22 || 10:10:56
 * * * * File    : Longest Substring with K Uniques.cpp
 */


// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
// Problem 10;



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
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int n=s.size();
        int l=0, r=0, ans=-1;
        map<char,int> cnt;
        while(r<n){
            cnt[s[r]]++;
            if(cnt.size()==k){
                ans=max(ans, r-l+1);
            }else{
                while(cnt.size()>k && l<=r){
                    cnt[s[l]]--;
                    if(cnt[s[l]]==0){
                        cnt.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};