#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve() {
    int N;
    cin >> N;  // Input number of rows

    // Upper part of shape
    for(int i=1;i<=N;i++) {

        for(int j=1;j<=N-i;j++) {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++) {
            cout<<"*";
        }
cout<<"\n";
    }

    // Lower part of shape
    for(int i=N;i>=1;i--) {
        for(int j=N-i;j>=1;j--) {
            cout<<" ";
        }
        for(int j=2*i-1;j>=1;j--) {
            cout<<"*";
        }
        cout<<"\n";

    }


}

int main() {
    solve();
    fastIO();

    return 0;
}
