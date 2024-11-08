#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tuple<string, int, string> t = {"abubakar",8, "01819706145"};
    // tuple<string, int, string> t = make_tuple("abubakar",8, "01819706145");
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    auto [name, roll, phoneNuber] = t;
    cout << name << " "<< roll << " " << phoneNuber << endl;
    return 0;
}