#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n; // Number of soldiers

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Find the index of the tallest soldier (maximum height)
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] > heights[maxIndex]) {
            maxIndex = i;
        }
    }

    // Find the index of the shortest soldier (minimum height)
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] <= heights[minIndex]) { // Use <= to get the last occurrence
            minIndex = i;
        }
    }

    // Calculate the number of swaps needed
    int swaps = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        swaps--; // Overlap when maxIndex > minIndex
    }

    cout << swaps << endl;
}


int main() {
    fastIO();
    solve();
    return 0;
}
