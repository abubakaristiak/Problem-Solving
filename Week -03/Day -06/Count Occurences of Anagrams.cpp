/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 23:26:08
 * * * * File    : Count Occurences of Anagrams.cpp
 */


// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
// Problem 10;

//{ Driver Code Starts
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

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int n=txt.size();
	    int k=pat.size();
	    
	    vector<int> mt(26, 0);
	    vector<int> mp(26, 0);
	    for(int i=0; i<k; i++){
	        mp[pat[i]-'a']++;
	        mt[txt[i]-'a']++;
	    }
	    int cnt=0;
	    if(mp==mt){
	        cnt++;
	    }
	    
	    for(int i=k; i<n; i++){
	        mt[txt[i]-'a']++;
	        mt[txt[i-k]-'a']--;
	        if(mp==mt){
	            cnt++;
	        }
	    }
	    return cnt;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends