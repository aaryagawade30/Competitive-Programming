#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int stof = 0, ftos = 0;
    for(int i = 0; i < n -1; i++) {
        if(s[i] == s[i +1]) continue;
        if(s[i] == 'S' && s[i +1] == 'F') stof++;
        else if(s[i] == 'F' && s[i +1] == 'S') ftos++;
    }
    string ans = (stof > ftos) ? "YES" : "NO";
    cout << ans << endl;
    return 0;
}