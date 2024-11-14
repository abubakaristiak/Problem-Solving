/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-14 || 18:48:11
 * * * * File    : First negative in every window of size k.cpp
 */


// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
// Problem 5;


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
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& a, int k) {
        int n=a.size();
        int l=0, r=0;
        vector<int> ans;
        queue<int> q;
        
        while(r<n){
            if(a[r]<0){
                q.push(a[r]);
            }
            if(r-l+1==k){
                if(!q.empty()){
                    ans.push_back(q.front());
                    if(a[l]==q.front()){
                        q.pop();
                    }
                }else{
                    ans.push_back(0);
                }
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends