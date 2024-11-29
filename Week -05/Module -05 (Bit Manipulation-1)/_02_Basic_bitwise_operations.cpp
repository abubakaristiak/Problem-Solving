/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 10:18:54
 * * * * File    : _02_Basic_bitwise_operations.cpp
 */


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


int check_kth_bit_on_or_off(int n, int k){
    return (n>>k) & 1;
}


void print_on_and_off_bits(int n){
    for(int k=30; k>=0; k--){
        if(check_kth_bit_on_or_off(n,k)){
            cout << 1 << " ";
        }else cout << 0 << " ";
    }
}

int turn_on_kth_bit(int n, int k){
    return (n | (1<<k));
}


int turn_off_kth_bit(int n, int k){
    return (n & (~(1<<k)));
}

int toggle_kth_bit(int n, int k){
    return (n ^ (1<<k));
}
int main()
{
    fast();
    int n=45;
    // cout << check_kth_bit_on_or_off(n, 3) << endl;
    // print_on_and_off_bits(n);
    cout << turn_on_kth_bit(n,4) <<endl;
    cout << turn_off_kth_bit(n,3) <<endl;
    cout << toggle_kth_bit(n,4) << endl;

    return 0;


// Alhamdulillah
}