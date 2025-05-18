#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int u = 0, ans = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '1' && s[i - 1] == '0' && u == 0)
            {
                u = 1;
            }
            else if (s[i] != s[i - 1])
            {
                ans++;
            }
        }
        cout << ans + 1 << endl;
    }
}
