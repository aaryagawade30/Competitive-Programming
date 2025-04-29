#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll xk, yk;
    cin >> xk >> yk;
    ll xq, yq;
    cin >> xq >> yq;
    set<pair<int, int>> k_hits, q_hits;

    vi dx = {-1, 1, 1, -1};
    vi dy = {-1, -1, 1, 1};

    for (int i = 0; i < 4; i++)
    {
        k_hits.insert({xk + dx[i] * a, yk + dy[i] * b});
        k_hits.insert({xk + dx[i] * b, yk + dy[i] * a});

        q_hits.insert({xq + dx[i] * a, yq + dy[i] * b});
        q_hits.insert({xq + dx[i] * b, yq + dy[i] * a});
    }
    int ans = 0;
    for (auto pos : k_hits)
    {
        if (q_hits.find(pos) != q_hits.end())
        {
            ans++;
        }
    }

    cout << ans << endl;
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