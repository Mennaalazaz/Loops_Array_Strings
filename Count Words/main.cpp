#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string S;
    getline(cin, S);

    int word_count = 0;

    for (int i = 0; i < S.length(); i++) {
        if (isalpha(S[i])) {
            // Check if it's the start of a word
            if (i == 0 || !isalpha(S[i - 1])) {
                word_count++;
            }
        }
    }

    cout << word_count << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
