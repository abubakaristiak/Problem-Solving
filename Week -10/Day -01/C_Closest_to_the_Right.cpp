/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-03 || 19:35:06
 * * * * File    : C_Closest_to_the_Right.cpp
 */


// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
// Problem 03


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
    int n,k; cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    while (k--)
    {
        int x; cin >> x;
        int l=0, r=n-1, ans=n;
        while (l<=r)
        {
            int mid=(l+r)/2;        // int mid=l+(l-r)/2;
            if(x<=v[mid]){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        cout << ans+1 << endl;
        

    }
    

    return 0;


// Alhamdulillah
}