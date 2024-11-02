// //https://vjudge.net/contest/667724#problem/E

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int idx=0;
        vector<int> ar(n);
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=ar[j];
                if(sum%2==0){
                    idx=max(j-i+1,idx);
                }
            }
        }
        cout << idx << endl;
    }
    
    return 0;
}





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
//         vector<int> ar(n);
//         for(int i=0; i<n; i++){
//             cin >> ar[i];
//         }
//         int tSum = 0;
//         int first_store=-1, last_store=-1;
//         for(int i=0; i<n; i++){
//             tSum+=ar[i];
//             if(ar[i]%2 != 0){
//                 if(first_store==-1){
//                     first_store=i;
//                 }
//                 last_store=i;
//             }
//         }
//         if(tSum%2==0) cout << n << endl;
//         else{
//             int maxLength=0;
//             if(first_store != -1){
//                 maxLength=max(maxLength, n-1-first_store);
//                 maxLength=max(maxLength, last_store);
//             }
//             cout << maxLength << endl;  
//         }

//     }
    
//     return 0;
// }


