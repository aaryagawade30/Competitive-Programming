#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int diff = (n - m);
        if(abs(l) >= diff) {
            cout << l + diff << " " << r << endl;
        }
        else {
            cout << 0 << " " << r - l - diff << endl;
        }
    }
    return 0;
}