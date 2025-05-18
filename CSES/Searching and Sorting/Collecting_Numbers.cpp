// file: collect_numbers.cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> pos(n + 1); // position map
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int rounds = 1;
    for (int i = 2; i <= n; ++i) {
        if (pos[i] < pos[i - 1]) // out of order
            ++rounds;
    }

    cout << rounds << "\n";
    return 0;
}
