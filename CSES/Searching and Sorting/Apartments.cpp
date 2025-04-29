#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> ppl(n), apr(m);
    for(int& it : ppl) cin >> it;
    for(int& it : apr) cin >> it;

    sort(ppl.begin(), ppl.end());
    sort(apr.begin(), apr.end());

    int p1 = 0, p2 = 0, cnt = 0;
    while(p1 < n && p2 < m) {
        if(abs(ppl[p1] - apr[p2]) <= k) {
            cnt++;
            p1++, p2++;
        }
        else if(ppl[p1] < apr[p2]) p1++;
        else p2++;
    }

    cout << cnt;
    return 0;
}