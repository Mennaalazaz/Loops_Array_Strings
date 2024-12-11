#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve() {
    int n; cin>>n;
    int a[n]; int ones=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1) ones++;
    }

    int best=-1;

    // Get max number of zeros Consecutively
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int z=0;
            for(int k=i;k<=j;k++) {
                if(a[k]==0) z++;
                else z--;
            }
            if(ones+z>best) best=ones+z;
        }
    }

    cout<<best;
}
int main() {
    fastIO();
    solve();
    return 0;
}
