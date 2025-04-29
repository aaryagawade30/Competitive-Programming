#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    
}

int main()
{
    int n; cin >> n;
    int tot = 0;
    for(int i = 1; i <= n; i++) tot += i;

    vi v(n -1);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << tot - sum << endl;

    return 0;
}