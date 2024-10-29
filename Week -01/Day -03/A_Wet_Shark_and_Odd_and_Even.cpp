// https://codeforces.com/problemset/problem/621/A
// Problem: H

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> v(n);
    ll sum=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }

    if(sum%2==1){
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            ll tmpSum = sum-v[i];
            if(tmpSum%2==0){
                sum = tmpSum;
                break;
            }
        }
    }
    cout << sum << endl;

    return 0;
}