#include <bits/stdc++.h>
using namespace std;

long long digSum(long long n) {
    long long sum = 0;
    while(n != 0) {
        int last = n % 10;
        sum += last;
        n /= 10;
    }
    return sum;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << max(digSum(a), digSum(b));

    return 0;
}