// https://codeforces.com/problemset/problem/501/B
//  Problem: 4

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n; cin >> n;
//     map<string, string> ans, has;
//     for(int i=1; i<=n; i++){
//         string a,b;
//         cin >> a >> b;
//         if(has.find(a) != has.end()){
//             string s=has[a];
//             ans[s]=b;
//             has.erase(a);
//             has[b]=s;
//         }
//         else{
//             ans[a]=b;
//             has[b]=a;
//         }
//     }
//     cout << ans.size() << endl;
//     for(auto [x,y]:ans){
//         cout << x << " " << y << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, string> mp;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        bool flag = false;
        for (auto it : mp)
        {
            if (it.second == str1)
            {
                mp[it.first] = str2;
                flag = true;
            }
        }
        if (!flag)
        {
            mp[str1] = str2;
        }
    }
    cout << mp.size() << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}