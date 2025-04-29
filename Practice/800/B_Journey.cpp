#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int s = a + b + c;
        int d = n / s * 3;
        if(n % s == 0) cout << d << endl;
        else if(n % s <= a) cout << d + 1 << endl;
        else if(n % s <= a + b) cout << d + 2 << endl;
        else cout << d + 3 << endl;

    }

    return 0;
}