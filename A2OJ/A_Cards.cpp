#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    string zero = "zero", one = "one";
    unordered_map<char, int> mpp;
    for(char c : s) mpp[c]++;

    int one_count = min({mpp['o'], mpp['n'], mpp['e']});
    int zero_count = min({mpp['z'], mpp['e'], mpp['r'], mpp['o'] - one_count});

    // Print the digits based on the counts
    for(int i = 0; i < one_count; i++) {
        cout << 1 << " ";
    }
    for(int i = 0; i < zero_count; i++) {
        cout << 0 << " ";
    }

    return 0;
}