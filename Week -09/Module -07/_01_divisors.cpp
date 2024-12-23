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

    // T.C -> O(n)
    // int n; cin >> n;
    // for(int i=1; i<=n; i++){
    //     if(n%i==0){
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;





    // another approach..for better complexity T.C-> O(sqrt(n));
    int n; cin >> n;
    vector<int> divisors;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
            if((n/i)!=i){
                divisors.push_back(n/i);
            }
        }
    }

    asort(divisors);
    for(auto val:divisors){
        cout << val << " ";
    }

    return 0;


// Alhamdulillah
}