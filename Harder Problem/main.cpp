#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int freq[200006];
void solve() {
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int avilable = 0;
    for (int i = 0; i < n; i++) {
        if (freq[a[i]] == 0) {
            b[i] = a[i];
            freq[a[i]]++;
        }
        else {
            while(freq[avilable]) {
                avilable++; //loop till find number its frequency=0
            }
            b[i] = avilable;
            freq[avilable]++;
        }
    }
    for (int i = 0; i < n; i++) cout << b[i] << " ";
}



int main() {
    fastIO();
    solve();
    return 0;
}
