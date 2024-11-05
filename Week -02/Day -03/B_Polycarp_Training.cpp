// https://codeforces.com/problemset/problem/1165/B
// Problem 2;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    multiset<int> ml;
    for(int i=0; i<n; i++){
        int val; cin >> val;
        ml.insert(val);
    }

    int ans=0, problems=1;
    while(!ml.empty()){
        auto LB = ml.lower_bound(problems);
        if(LB != ml.end()){
            ans++;

            ml.erase(LB);
        }
        else{
            break;
        }
        problems++;
    }
    cout << ans << endl;
    return 0;
}