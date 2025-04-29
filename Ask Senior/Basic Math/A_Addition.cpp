#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>


int main()
{
    
    int n; cin >> n;
    vi arr(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    string ans = (sum % 2 == 0) ? "YES" : "NO";
    cout << ans;

    return 0;
}