#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int l = 0, e = n;
    int cnt = 0;
    while(l <= n && e >= 0) {
        if(l != 0 && e % l == 0) cnt++;
        l++, e--;
    }
    cout << cnt  -1<< endl;

    return 0;
}