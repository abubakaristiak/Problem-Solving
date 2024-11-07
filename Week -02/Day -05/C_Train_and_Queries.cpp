// https://codeforces.com/problemset/problem/1702/C
// Problem 4;

#include<bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
        map<int, set<int>> mp;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            mp[x].insert(i);
        }

        for(int i=0; i<m; i++){
            int l,r; cin >> l >> r;
            if(mp.find(l)==mp.end() || mp.find(r)==mp.end()){
                no;
            }
            else{
                int leftIdx, rightIdx;
                leftIdx=*mp[l].begin();
                rightIdx=*mp[r].rbegin();
                if(leftIdx < rightIdx){
                    yes;
                }else no;
            }
        }
    }
    
    return 0;
}