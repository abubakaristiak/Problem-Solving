#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        bool track = false;
        for (int i = 0; i < n - 1; i++)
        {
            cout << str << endl;
            if (str[i] == str[i + 1] && !track)
            {
                if (str[i] != 'z')
                {
                    cout << char(str[i] + 1);
                }
                else
                    cout << 'a';
                track = true;
            }
        }
        if (track)
            cout << str[n - 1] << endl;
        else if (!track && str[n - 1] != 'z')
            cout << str[n - 1] << char(str[n - 1] + 1) << endl;
        else if (!track)
            cout << str[n - 1] << 'a' << endl;
    }

    return 0;
}