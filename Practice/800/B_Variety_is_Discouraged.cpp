#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> ump;
        int n;
        cin >> n;
        int max = 0, cur = 0;
        int l = 1, r = 1;
        int num[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> num[i];
            ump[num[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (ump[num[i]] == 1)
            {
                cur++;
                if (cur > max)
                {
                    max = cur;
                    r = i, l = i - cur + 1;
                }
            }
            else
                cur = 0;
        }
        if (max == 0)
            cout << 0 << endl;
        else
            cout << l << ' ' << r << endl;
    }
    return 0;
}