#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s; cin >> s;
    string target = "hello";
    int j = 0; // Pointer for "hello"

    for (char c : s) {
        if (c == target[j]) {
            j++;
        }
        if (j == 5) { // If all characters of "hello" are matched
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}

