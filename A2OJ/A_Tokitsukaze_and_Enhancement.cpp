#include <bits/stdc++.h>
using namespace std;
int x, i, A; char B;

char calc(int x) {
    x = x % 4;
    if(x == 0) return 'D';
    if(x == 1) return 'A';
    if(x == 2) return 'C';
    return 'B';
}

int main()
{
    cin >> x;
    A = 0;
    B = calc(x);
    for(int i = 1; i <= 2; i++) {
        if(calc(x + i) < B) {
            A = i;
            B = calc(x + i);
        }
    }
    cout << A << " " << B;
    return 0;
}