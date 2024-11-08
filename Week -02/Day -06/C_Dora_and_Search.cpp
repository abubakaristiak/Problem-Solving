// https://codeforces.com/problemset/problem/1793/C
// Problem 6;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        set<int> st(v.begin(), v.end());
        int l=0,r=n-1;
        while (l<=r)
        {
            int mn=*st.begin();
            int mx=*st.rbegin();
            bool flag=false;

            if(v[l]==mn || v[l]==mx){
                st.erase(v[l]);
                l++;
                flag=true;
            }
            if(v[r]==mx || v[r]==mn){
                st.erase(v[r]);
                r--;
                flag=true;
            }
            if(!flag){
                break;
            }
        }
        if(l>r) cout << "-1" << endl;
        else cout << (l+1) << " " << (r+1) << endl;
        
    }
    return 0;
}


