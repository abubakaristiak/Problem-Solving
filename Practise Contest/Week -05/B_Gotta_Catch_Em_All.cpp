/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-25 || 21:12:24
 * * * * File    : B_Gotta_Catch_Em_All.cpp
 */




#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.rbegin(), v.rend())
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
        int n,x,y; cin >> n >> x >> y;
        vector<int> v(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
        }
        int mnVal=x*sum;
        mnVal = min(mnVal, y*n);
        asort(v);
        int norSum=sum;
        for(int i=1; i<=n; i++){
            norSum-=v[i-1];
            int val=i*y+norSum*x;
            mnVal=min(mnVal, val);
        }
        cout << mnVal << endl;
    }
    
    return 0;


// Alhamdulillah
}