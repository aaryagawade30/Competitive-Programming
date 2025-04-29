#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define str string

int main()
{
    str s;
    cin >> s;
    ll cnt = 1, maxi = 0;
    if (s.length() == 1)
        cout << 1;
    else
    {
        for (ll i = 0; i < s.length() - 1; i++)
        {
            char c = s[i];
            if (s[i + 1] == s[i])
                cnt++;
            else if (s[i + 1] != s[i])
                cnt = 1;
            maxi = max(cnt, maxi);
        }
        cout << maxi << endl;
    }
    return 0;
}