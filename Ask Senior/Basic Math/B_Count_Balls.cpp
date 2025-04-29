#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, b, r;
    cin >> n >> b >> r;

    long long cycle_length = b + r;
    long long full_cycles = n / cycle_length;
    long long remaining = n % cycle_length;

    long long ans = (full_cycles * b) + min(remaining, b);
    
    cout << ans << endl;
    return 0;
}
