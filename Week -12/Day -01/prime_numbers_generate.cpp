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
    int n; cin >> n;
    vector<bool> isPrime(n+1, true);

    for(int i=2; i*i<=n; i++){
        for(int j=i+i; j<=n; j+=i){
            isPrime[j]=false;
        }
    }
    
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }

    return 0;


// Alhamdulillah
}