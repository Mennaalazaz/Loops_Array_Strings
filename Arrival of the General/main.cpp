#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Find positions of max and min height
    int max_height = -1, max_pos = -1;
    int min_height = 101, min_pos = -1;

    /*
    max_pos: The index (position) of the first occurrence of the tallest soldier in the line.
    min_pos: The index (position) of the last occurrence of the shortest soldier in the line.
    */
    for (int i = 0; i < n; i++) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_pos = i;
        }
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_pos = i;
        }
    }

    // Calculate the minimum moves
    // to make the tallest soldier at the beginning and the shortest soldier at the end
    int total_moves = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) {
        total_moves--; // Account for overlap of swaps
    }

    cout << total_moves << endl;
}



int main() {
    fastIO();
    solve();
    return 0;
}
