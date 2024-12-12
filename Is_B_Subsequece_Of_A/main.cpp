#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n,m; cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int j = 0; // Pointer for B
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] == b[j]) {
            j++; // Match found, move to the next element in B
        }
    }

    if (j == m) {
        cout << "YES\n"; // All elements of B are matched in order in A
    } else {
        cout << "NO\n"; // Not all elements of B are matched
    }
}



int main(){
    fastIO();
    solve();
    return 0;
}