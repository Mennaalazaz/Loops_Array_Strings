#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        int count = 0;
        int length = 1;  // Start with length 1 for the first element

        // Traverse the array to count non-decreasing subarrays
        for (int i = 0; i < N; i++) {
            if (i > 0 && A[i] >= A[i-1]) {
                length++;  // Extend the current non-decreasing subarray
            } else {
                length = 1;  // Start a new subarray with A[i]
            }

            count += length;  // Add the current subarray count to the total
        }

        cout << count << endl;
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}



