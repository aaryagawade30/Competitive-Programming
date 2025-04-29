#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int cnt = 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) cnt++;
    }
    if(cnt > 0) return false;
    return true;
}

int main()
{
    int n; cin >> n;
    for(int i = 1; i < n; i++) {
        if(n - i + i == n && !isPrime(n -i) && !isPrime(i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}