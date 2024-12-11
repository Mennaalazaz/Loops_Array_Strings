#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string line;
    bool in_block_comment = false; // Flag to track if we are inside a block comment

    while (getline(cin, line)) {
        string result_line;   // To store the cleaned-up version of the current line
        size_t i = 0;

        while (i < line.length()) {
            if (in_block_comment) {
                // Find the end of the block comment
                size_t end_block = line.find("*/", i);
                if (end_block != string::npos) {
                    in_block_comment = false;
                    i = end_block + 2; // Skip the block comment end
                } else {
                    break;  // If the block comment continues to the next line, break
                }
            } else {
                size_t single_comment = line.find("//", i);
                size_t start_block = line.find("/*", i);

                // Handle single-line comments
                if (single_comment != string::npos &&
                    (start_block == string::npos || single_comment < start_block)) {
                    result_line += line.substr(i, single_comment - i); // Add code before //
                    break;

                    // Handle block comments
                } else if (start_block != string::npos) {
                    result_line += line.substr(i, start_block - i); // Add code before /*
                    in_block_comment = true;
                    i = start_block + 2; // Skip the block comment start
                } else {
                    result_line += line.substr(i); // Add the rest of the line
                    break;
                }
            }
        }

        //  print if not empty
        if (!result_line.empty()) {
            cout << result_line << '\n';
        }
    }
}

/*  Note
        size_line_comment < size_block_comment
        it means the single-line comment appears earlier in the line.
        In this case, the code processes the single-line comment and ignores the rest of the line.
 */



int main() {
    fastIO();
    solve();
    return 0;
}
