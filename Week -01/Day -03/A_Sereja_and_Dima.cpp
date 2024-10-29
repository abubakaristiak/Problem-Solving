// https://codeforces.com/contest/381/problem/A
// Problem: 01

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int sum1=0, sum2=0;
    int l=0, r=n-1, track=0;

    while (l<=r)
    {
        if(track%2==0){
            if(v[l]>v[r]){
                sum1+=v[l];
                l++;
            }
            else{
                sum1+=v[r];
                r--;
            }
        }
        else{
            if(v[l]>v[r]){
                sum2+=v[l];
                l++;
            }
            else{
                sum2+=v[r];
                r--;
            }
        }
        track++;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}