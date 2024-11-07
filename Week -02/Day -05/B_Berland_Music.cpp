// https://codeforces.com/problemset/problem/1622/B
// Problem 7;

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
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }

        string s; cin >> s;
        int cnt0=0, cnt1=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt1++;
            }else{
                cnt0++;
            }
        }
        if(cnt1==n){
            for(int i=0; i<n; i++){
                cout << ar[i] << " ";
            }
            cout << endl;
            continue;
        }

        vector<int> b,sm;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                b.push_back(ar[i]);
            }else{
                sm.push_back(ar[i]);
            }
        }
        sort(b.begin(), b.end());
        sort(sm.begin(), sm.end());

        map<int, int> mp;
        long long ans=0;
        int x=n, y=1;
        for(int i=b.size()-1; i>=0; i--){
            mp[b[i]]=x;
            x--;
        }

        for(int i=0; i<sm.size(); i++){
            mp[sm[i]]=y;
            y++;
        }
        for(int i=0; i<n; i++){
            cout << mp[ar[i]] << " ";
        }
        cout << endl;

    }
    
    return 0;
}


