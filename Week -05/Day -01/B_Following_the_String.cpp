/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-25 || 18:33:18
 * * * * File    : B_Following_the_String.cpp
 */


// https://codeforces.com/problemset/problem/1927/B
// Problem 2;


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
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        map<char, int> mp;
        int curCh=97;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                cout << char(curCh);
                mp[curCh]++;
                curCh++;
            }else{
                for(auto it:mp){
                    if(it.second==v[i]){
                        cout << char(it.first);
                        mp[it.first]++;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    
    return 0;


// Alhamdulillah
}



// Another approach;
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
//     string s="abcdefghijklmnopqrstuvwxyz";
//     while (t--)
//     {
//         int n; cin >> n;
//         map<char, int> mp;
//         for(int i=0; i<s.size(); i++){
//             mp[s[i]]=0;
//         }
//         vector<int> v(n);
//         for(int i=0; i<n; i++){
//             cin >> v[i];
//             for(auto it:mp){
//                 if(it.second==v[i]){
//                     cout << it.first;
//                     mp[it.first]++;
//                     break;
//                 }
//             }
//         }
//         cout << endl;
//     }
    
//     return 0;
// // Alhamdulillah
// }




