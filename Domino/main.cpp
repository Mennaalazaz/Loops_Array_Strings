#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isEven(int n) {
    return (n % 2) == 0;
}

void solve() {
    int n;cin >> n;

    int a[n][2];
    int sumX = 0, sumY = 0, cnt = 0;

    // Input pairs and compute initial sums
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
        sumX += a[i][0];
        sumY += a[i][1];
    }

    // Check if sums are already even
    if (isEven(sumX) && isEven(sumY)) {
        cout << cnt << endl;
        return;
    }

    // Try swapping elements to make sums even
    for (int i = 0; i < n; i++) {
        // Perform swap
        sumX = sumX - a[i][0] + a[i][1];
        sumY = sumY - a[i][1] + a[i][0];
        cnt++;

        // Check if sums are even after the swap
        if (isEven(sumX) && isEven(sumY)) {
            cout << cnt << endl;
            return;
        }

        // Revert the swap if it doesn't work
        sumX = sumX - a[i][1] + a[i][0];
        sumY = sumY - a[i][0] + a[i][1];
        cnt--;
    }

    // If no solution is found
    cout << -1 << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
