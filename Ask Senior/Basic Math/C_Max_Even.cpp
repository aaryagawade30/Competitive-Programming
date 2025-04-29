#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Sort in descending order (largest values first)
    sort(arr.rbegin(), arr.rend());

    ll maxEven = -1, maxOdd = -1, secondEven = -1, secondOdd = -1;

    // Find the top two even and top two odd numbers
    for (ll num : arr) {
        if (num % 2 == 0) {
            if (num > maxEven) {
                secondEven = maxEven;
                maxEven = num;
            } else if (num > secondEven) {
                secondEven = num;
            }
        } else {
            if (num > maxOdd) {
                secondOdd = maxOdd;
                maxOdd = num;
            } else if (num > secondOdd) {
                secondOdd = num;
            }
        }
    }

    // Find the maximum even sum pair
    ll maxi = -1;
    if (maxEven != -1 && secondEven != -1) maxi = max(maxi, maxEven + secondEven);
    if (maxOdd != -1 && secondOdd != -1) maxi = max(maxi, maxOdd + secondOdd);

    cout << maxi << endl;
    
    return 0;
}
