#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int x, y;
        x = ceil(a / c);
        if(a % c != 0) x += 1;
        y = ceil(b / d);
        if(b % d != 0) y += 1;
        if(x + y <= k) cout << x << " " << y << endl;
        else cout << -1 << endl;
    }

    return 0;
}