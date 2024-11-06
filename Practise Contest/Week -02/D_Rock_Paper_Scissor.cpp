// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         string a,b; cin >> a >> b;
//         int bro=0, sis=0;
//         for(int i=0; i<n; i++){
//             if(a[i]=='R' && b[i]=='S') bro++;
//             else if(a[i]=='S' && b[i]=='P') bro++;
//             else if(a[i]='P' && b[i]=='R') bro++;

//             else if(b[i]=='S' && a[i]=='R') sis++;
//             else if(b[i]=='P' && a[i]=='S') sis++;
//             else if(b[i]=='R' && a[i]=='P') sis++;
//         }
//         cout << max(bro, sis) << endl;
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while (t--) {
        int n, chef = 0, chefina = 0, changes = 0;
        string a, b;
        cin >> n >> a >> b;

        // Calculate initial scores
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue;
            if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R'))
                chef++;
            else
                chefina++;
        }

        // If Chefina is winning, calculate minimum changes needed for Chef to win
        if (chef <= chefina) {
            for (int i = 0; i < n && chef <= chefina; i++) {
                if (a[i] != b[i] && (
                    (b[i] == 'R' && a[i] == 'S') || 
                    (b[i] == 'S' && a[i] == 'P') || 
                    (b[i] == 'P' && a[i] == 'R'))) {
                    
                    chef++;
                    chefina--;
                    changes++;
                }
            }
        }
        
        cout << changes << '\n';
    }
    
    return 0;
}

