#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> freq(1001, 0); // Frequency array for numbers 1 to 1000

    // Read the array and compute frequencies
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    // Find the maximum frequency
    int max_freq = *max_element(freq.begin(), freq.end());

    // Check if it's possible to rearrange the array
    if (max_freq <= (n + 1) / 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    /*
- For an array of size 𝑛, the maximum number of positions any single element can occupy
without having consecutive occurrences is ⌈n/2⌉ (the ceiling of 𝑛/2).
-In programming with integer division, we can achieve this by computing(𝑛+1)/2
because:
  If n is odd,  (n+1)/2=⌈n/2⌉.
  If n is even, (n+1)/2=  n/2, which is also the ceiling value.
    */
}

int main() {
    fastIO();
    solve();
    return 0;
}
