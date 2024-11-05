//https://codeforces.com/problemset/problem/368/B
// Problem 1;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m; cin >> n >> m;
    vector<int> v(n+1);
    vector<int> cnt(n+1);

    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    set<int> s;
    for(int i=n; i>=1; i--){
        s.insert(v[i]);
        cnt[i]=s.size();
    }
    while (m--)
    {
        int p; cin >> p;
        cout << cnt[p] << endl;
    }
    
    return 0;
}




// Brute force TLE test case 11
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n; cin >> n;
//     int t; cin >> t; 
//     vector<int> v(n+1);
//     for(int i=1; i<=n; i++){
//         cin >> v[i];
//     }
//     while (t--)
//     {
//         int q; cin >> q;
//         set<int> s;
//         for(int i=q; i<=n; i++){
//             s.insert(v[i]);
//         }
//         cout << s.size() << endl;
//         s.clear();
        
//     }
//     return 0;
// }