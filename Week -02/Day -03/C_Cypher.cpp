//https://codeforces.com/problemset/problem/1703/C
// Problem E;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int b;
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> b;
            v.push_back(b);
        }
        int val; 
        string s;
        for(int i=0; i<n; i++){
            cin >> val >> s;
            for(int j=0; j<val; j++){
                if(s[j]=='U'){
                    if(v[i]==0) v[i]=9;
                    else v[i]--;
                }
                else{
                    if(v[i]==9) v[i]=0;
                    else v[i]++;
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}