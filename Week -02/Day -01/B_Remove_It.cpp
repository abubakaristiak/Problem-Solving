//https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
// Problem A;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x; cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
        if(v[i]==x) continue;
        cout << v[i] << " ";
    }
    return 0;
}