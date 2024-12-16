#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve() {
   /*
    // if the problem was print
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            for (int j = i ; j < n; j++) {

                for (int k = i; k <= j; k++) {
                    cout<< a[k]<<" ";
                }
                cout<<"\n";

            }

        }
    }

    */

    // problem to Get max of each sub-array
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            for (int j = i ; j < n; j++) {
                int maxi=INT_MIN;

                for (int k = i; k <= j; k++) {
                    maxi = max(maxi, a[k]);

                }
                cout << maxi << " ";


            }

        }
        cout << endl;
    }

}

int main() {
    fastIO();
    solve();
    return 0;
}
