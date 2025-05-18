#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}


int main()
{
    int n; cin >> n;
    vector<pair<int, int>> movie(n);
    for(int i = 0; i < n; i++) {
        cin >> movie[i].first >> movie[i].second;
    }

    sort(movie.begin(), movie.end(), compare);
    int cnt = 0;
    int last_end_time = 0;

    for(int i = 0; i < n; i++) {
        if(movie[i].first >= last_end_time) {
            cnt++;
            last_end_time = movie[i].second;
        }
    }


    cout << cnt << endl;

    return 0;
}