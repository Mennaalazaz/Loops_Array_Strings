#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void maxOfAllSubarrays(int arr[], int n) {
    // Outer loop to fix the left boundary of the subarray
    for (int i = 0; i < n; ++i) {
        int currentMax = arr[i]; // Initialize the current max as the starting element

        // Inner loop to expand the right boundary of the subarray
        for (int j = i; j < n; ++j) {
            currentMax = max(currentMax, arr[j]); // Update the current max
            cout << currentMax << " ";
        }
    }
    cout << endl;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Find and print the maximum of every subarray
        maxOfAllSubarrays(a, n);
    }
}

    int main(){
    fastIO();
    solve();


    return 0;
}