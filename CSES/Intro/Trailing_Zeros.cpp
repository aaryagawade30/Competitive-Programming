#include <bits/stdc++.h>
using namespace std;

int countTrailingZeros(int n) {
    int cnt = 0;
    for (int i = 5; n / i > 0; i *= 5) {
        cnt += n / i;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << countTrailingZeros(n) << endl;
    return 0;
}
