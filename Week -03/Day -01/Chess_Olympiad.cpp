/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-10 || 21:46:12
 * * * * File    : Chess_Olympiad.cpp
 */

// https://www.codechef.com/problems/CHOLY
// Problem A;

#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int x,y,z; cin >> x >> y >> z;

    int score1 = x + 0.5*y;
    int score2 = z + 0.5*y;
    int rem = (4-(x+y+z));
    score1+=rem;

    if(score1 > score2) yes;
    else no;
    return 0;
}