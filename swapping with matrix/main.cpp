#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//  swapping rowX[], rowY[] acts like swapping two 1D array
void swapRows(int rowX[], int rowY[], int n) {
    for (int i = 0; i < n; i++) {
        swap(rowX[i], rowY[i]);
    }
}

void solve() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    x--, y--;

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Swap the rows x and y
    swapRows(a[x], a[y], n);

    // Swap the columns x and y
    for (int i = 0; i < n; i++) {
        swap(a[i][x], a[i][y]);
    }

    // Print the resulting matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
