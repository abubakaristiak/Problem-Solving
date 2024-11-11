/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 10:02:15
 * * * * File    : B_Number_of_Smaller.cpp
 */

// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

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
    int n,m; cin >> n >> m;
    vector<int> v1(n), v2(m);

    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }
    int l=0, r=0, cnt=0;
    while (r<m)
    {
        if(l<n && v1[l] < v2[r]){
            cnt++;
            l++;
        }else{
            cout << cnt << " ";
            r++;
        }
    }
    return 0;
}




// Another approach;
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
    int n,m; cin >> n >> m;
    vector<int> v1(n), v2(m);

    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }

    vector<int> res;
    for(int i=0; i<m; i++){
        int cnt = lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
        res.push_back(cnt);
    }
    for(auto it:res){
        cout << it << " ";
    }
    return 0;
}


