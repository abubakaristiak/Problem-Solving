    /*
    * Bismillahir Rahmanir Raheem
    *
    * * * * Coder   : abubakaristiak
    * * * * Created : 2024-11-27 || 17:55:28
    * * * * File    : B_Parity_and_Sum.cpp
    */


    // https://codeforces.com/problemset/problem/1993/B
    // Problem I;


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
    ll processing(vector<ll> &even, vector<ll> &odd){
        ll evenSize=even.size();
        ll oddSize=odd.size();
        ll mx=odd.back();
        if(even[0]>mx){
            return evenSize+1;
        }
        ll ans=0;
        for(ll i=0; i<evenSize; i++){
            if(even[i]>mx){
                return evenSize+1;
            }else{
                ans++;
                mx+=even[i];
            }
        }
        return ans;
    }
    int main()
    {
        fast();
        ll t; cin >> t;
        while (t--)
        {
            ll n; cin >> n;
            vector<ll> even, odd;
            for(ll i=0; i<n; i++){
                ll x; cin >> x;
                if(x%2==0){
                    even.push_back(x);
                }else{
                    odd.push_back(x);
                }
            }
            if(even.size()==0 || odd.size()==0){
                cout << 0 << endl;
                continue;
            }
            asort(even);
            asort(odd);
            ll ans=processing(even, odd);
            cout << ans << endl;

        }
        
        return 0;


    // Alhamdulillah
    }