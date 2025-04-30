#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Binary search for the largest k such that 1 + 2 + ... + k <= n + 1
    long long low = 0, high = 2e9;
    while (high - low > 1) {
        long long mid = (low + high) / 2;
        long long sum = 1LL * mid * (mid + 1) / 2;
        if (sum <= n + 1)
            low = mid;
        else
            high = mid;
    }

    // We need to buy (n - low + 1) logs to be able to construct lengths 1 through n
    cout << n - low + 1 << endl;

    return 0;
}
