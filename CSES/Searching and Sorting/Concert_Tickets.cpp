#include <bits/stdc++.h>
using namespace std;

// Find the index of the highest price ticket that doesn't exceed max_price
int findBestTicket(int max_price, vector<int>& prices, vector<bool>& sold) {
    int best_index = -1;
    int best_price = -1;
    
    // Binary search to find the highest price less than or equal to max_price
    int low = 0, high = prices.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (prices[mid] <= max_price) {
            // This price works, see if we can find a higher valid price
            low = mid + 1;
        } else {
            // This price is too high
            high = mid - 1;
        }
    }
    
    // At this point, high is the index of the highest price that doesn't exceed max_price
    // (or -1 if no such ticket exists)
    
    // Find the first unsold ticket at or below this price
    for (int i = high; i >= 0; i--) {
        if (!sold[i]) {
            return i;
        }
    }
    
    return -1; // No suitable ticket found
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> prices(n);
    for (int& x : prices) cin >> x;
    
    vector<int> max_prices(m);
    for (int& x : max_prices) cin >> x;
    
    // Sort ticket prices
    sort(prices.begin(), prices.end());
    
    // Keep track of which tickets have been sold
    vector<bool> sold(n, false);
    
    // Process each customer
    for (int i = 0; i < m; i++) {
        int max_price = max_prices[i];
        int ticket_index = findBestTicket(max_price, prices, sold);
        
        if (ticket_index == -1) {
            cout << -1 << endl; // No suitable ticket available
        } else {
            cout << prices[ticket_index] << endl;
            sold[ticket_index] = true; // Mark ticket as sold
        }
    }
    
    return 0;
}