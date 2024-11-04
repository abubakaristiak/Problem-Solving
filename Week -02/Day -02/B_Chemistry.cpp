// https://codeforces.com/problemset/problem/1883/B
// Problem G;

#include<bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        string s; cin >> s;
        vector<int> v(26,0);
        for(auto ch:s){
            v[ch-'a']++;
        }
        int oddCnt=0;
        for(int i=0; i<26; i++){
            if(v[i]%2==1){
                oddCnt++;
            }
        }
        if(k>=(oddCnt-1)){
            yes;
        }
        else no;
    }
    
    return 0;
}