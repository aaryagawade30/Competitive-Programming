#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        s[n -2] = 'i';
        s.resize(n-1);
        cout << s << endl;
    }

    return 0;
}