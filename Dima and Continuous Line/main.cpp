#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve() {
    int n;cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    // Check all pairs of segments for intersections
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            // Segments are [points[i], points[i+1]] and [points[j], points[j+1]]
            int x1 = min(points[i], points[i + 1]);
            int x2 = max(points[i], points[i + 1]);
            int x3 = min(points[j], points[j + 1]);
            int x4 = max(points[j], points[j + 1]);

            // Check if they intersect
            // Two segments [x1, x2] and[x3, x4] intersect if: (x1 < x3 < x2 < x4) or (x3 < x1 < x4 < x2)
            if ((x1 < x3 && x3 < x2 && x2 < x4) || (x3 < x1 && x1 < x4 && x4 < x2)) {
                cout << "yes\n";
                return;
            }
        }
    }

    // No intersections found
    cout << "no\n";
}

int main() {
    fastIO();
    solve();
    return 0;
}
