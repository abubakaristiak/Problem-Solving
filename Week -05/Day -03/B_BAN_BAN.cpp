/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 22:45:52
 * * * * File    : B_BAN_BAN.cpp
 */


// https://codeforces.com/problemset/problem/1747/B
// Problem F;


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int l=1, r=3*n-1;
        cout << (n+1)/2 << endl;
        while (l<r)
        {
            cout << l << " " << r << endl;
            l+=3, r-=3;
        }
        
    }
    return 0;


// Alhamdulillah
}




// #include<bits/stdc++.h>
// #define ll long long
// #define pi pair<ll, ll>
// #define asort(v) sort(v.begin(), v.end())
// #define rsort(v) sort(v.begin(), v.end(), greater<>())
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define endl "\n"
// #define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;
// int main()
// {
//     fast();
//     int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         string s="#";
//         for(int i=0; i<n; i++){
//             s=s+"BAN";
//         }
//         n=s.size()-1;
//         vector<pair<int, int>> ans;
//         int l=2, r=n;
//         while (l<r)
//         {
//             ans.push_back({l,r});
//             swap(s[l], s[r]);
//             l+=3, r-=3;
//         }
//         cout << ans.size() << endl;
//         for(auto it:ans){
//             cout << it.first << " " << it.second << endl;
//         }
//     }
    
//     return 0;


// // Alhamdulillah
// }