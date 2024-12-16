#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        // Fill row 1 with 'a' monkeys
        int seated_row1 = min(a, m);

        // Fill row 2 with 'b' monkeys
        int seated_row2 = min(b, m);

        // Remaining seats in both rows
        int remaining_row1 = m - seated_row1;
        int remaining_row2 = m - seated_row2;

        // Fill remaining seats with 'c' monkeys
        int seated_c_row1 = min(c, remaining_row1);
        c -= seated_c_row1; // Reduce available 'c' monkeys

        int seated_c_row2 = min(c, remaining_row2);

        // Total monkeys seated
        int total_seated = seated_row1 + seated_row2 + seated_c_row1 + seated_c_row2;
        cout << total_seated << '\n';
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
