#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve()
{
    ll n;
    cin >> n;
    vl arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    for(ll i = 0; i < n; i++) {
        if(arr[i] == 1) arr[i]++;
    }

    for(ll i = 0; i < n -1; i++) {
        if(arr[i +1]  % arr[i] == 0) arr[i +1]++;
    }
    
    for (ll i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    }

    int main()
    {
        int T;
        cin >> T;
        while (T--)
        {
            solve();
        }

        return 0;
    }