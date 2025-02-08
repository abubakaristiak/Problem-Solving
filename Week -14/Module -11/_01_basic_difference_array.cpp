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


void solve()
{
    int n,q; cin >> n >> q;
    vector<int> v(n);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }


    vector<int> diff(n+2), prefix(n+2);
    while (q--)
    {
        int l,r,x; cin >> l >> r >> x;
        diff[l]+=x;
        diff[r+1]-=x;
    }

    for(int i=1; i<=n; i++){
        prefix[i]=prefix[i-1]+prefix[i];
    }

    for(int i=1; i<=n; i++){
        cout << v[i]+prefix[i] <<" ";
    }
    cout << endl;
    
}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}



/*
input:
5 3
2 5 1 8 14
1 4 2
2 5 6
2 4 3
*/