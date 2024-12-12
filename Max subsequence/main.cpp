#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    /*
    Since we need a subsequence with no two adjacent characters being the same, we can simply iterate through
       𝑆 and keep track of the last added character.
    If the current character is the same as the last added character, skip it.
    */
    int n; cin >> n;
    string s; cin >> s;

    char last = '\0'; // Variable to track the last added character
    int maxSize = 0;

    for (char c : s) {
        if (c != last) {
            maxSize++; // Add to the subsequence
            last = c;  // Update the last added character
        }
    }
    cout << maxSize << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
