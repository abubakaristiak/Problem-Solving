/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-25 || 10:37:26
 * * * * File    : _01_Bitwise_Operators.cpp
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
int main()
{
    fast();
    int a=11, b=19;
    int AND = a&b;
    int OR = a|b;
    int XOR = a^b;

    cout << AND << endl;
    cout << OR << endl;
    cout << XOR << endl;



    // left shifting;
    int akbar_left_shift=(a<<1);
    int dibar_left_shift=(a<<2);
    cout << akbar_left_shift << endl;
    cout << dibar_left_shift << endl;


    // right shifting;
    int akbar_right_shift=(a>>1);
    int dibar_right_shift=(a>>2);
    cout << akbar_right_shift << endl;
    cout << dibar_right_shift << endl;
    return 0;


// Alhamdulillah
}