//https://codeforces.com/problemset/problem/637/B
// Problem 9

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=n-1; i>=0; i--){
        if(mp.find(v[i])==mp.end()){
            cout << v[i] << endl;
            mp[v[i]]=1;
        }
    }
    return 0;
}