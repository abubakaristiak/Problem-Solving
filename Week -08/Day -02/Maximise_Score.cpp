/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-19 || 12:30:13
 * * * * File    : Maximise_Score.cpp
 */



// https://vjudge.net/contest/679642#problem/B
// Problem B;



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
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
        for(int i =0; i<n; i++){
            cin >> v[i];
        }

        vector<int> diff(n-1);
        for(int i=0; i<n-1; i++){
            diff[i]=abs(v[i]-v[i+1]);
        }

        int score=INT_MAX;
        if(n>=2){
            score=min(score, diff[0]);
        }
        if(n>=2){
            score=min(score, diff[n-2]);
        }
        for(int i=1; i<n-1; i++){
            int mx=max(diff[i-1], diff[i]); 
            score=min(score, mx);
        }
        cout << score << endl;

    }

    return 0;


// Alhamdulillah
}



// another approach
// #include<bits/stdc++.h>
// #define ll long long
// #define pi pair<ll, ll>
// #define asort(v) sort(v.begin(), v.end())
// #define rsort(v) sort(v.begin(), v.end(), greater<>())
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define cyes cout << "Yes\n"
// #define cno cout << "No\n"
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
//         vector<int> v(n);
//         for(int i=0; i<n; i++){
//             cin >> v[i];
//         }

//         int ans=INT_MAX;
//         for(int i=0; i<n; i++){
//             int mx=0;
//             if(i+1<n){
//                 mx=max(mx, abs(v[i+1]-v[i]));
//             }
//             if(i-1>=0){
//                 mx=max(mx, abs(v[i-1]-v[i]));
//             }
//             ans=min(ans, mx);
//         }
//         cout << ans << endl;
    
//     }
//     return 0;


// // Alhamdulillah
// }