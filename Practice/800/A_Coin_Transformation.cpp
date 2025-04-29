#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        float res1 = log(n) / log(4);
        if(n < 4) cout << 1 << endl;
        else if(res1==floor(res1)) cout << (int)n / 4 << endl;
        else cout << (int)n / 4 + 1 << endl;
    }

    return 0;
}