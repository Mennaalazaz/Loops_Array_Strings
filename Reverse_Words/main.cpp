#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector<string> split(const string& s) {
    vector<string> Vwords;
    string sub = "";

    for (char c : s) {
        if (c == ' ') {
            if (!sub.empty()) {
                Vwords.push_back(sub); // Add the word to the vector
                sub = ""; // Reset for the next word
            }
        } else {
            sub += c; // Append character to the current word
        }
    }

    // Add the last word if it exists
    if (!sub.empty()) {
        Vwords.push_back(sub);
    }

    return Vwords;
}

string reverse(const string& s) {
    string reversed = s;
    int n = reversed.size();

    // Swap characters from both ends moving toward the center
    for (int i = 0; i < n / 2; ++i) {
        swap(reversed[i], reversed[n - i - 1]);
    }

    return reversed;
}


void solve() {
    string s;
    getline(cin, s); // Use getline as string contain spaces

    vector<string> Vwords = split(s);

    for(string & word : Vwords) {
        cout << reverse(word) << " ";
    }

}

int main() {
    fastIO();
    solve();
    return 0;
}
