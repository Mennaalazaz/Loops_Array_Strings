#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
#define intCeil(a,b) (ll(a)+ll(b-1))/ll(b)


void solve() {
    int t; cin>>t;
    while(t--) {
        ll k,l1,r1,l2,r2; cin>>k>>l1>>r1>>l2>>r2;
        ll c=1; // Start with c = k^0 = 1
        ll ans=0;
        while(c<=r2) { //  as r2 is the greatest number

            ll mini_X=intCeil(l2,c);
            if(mini_X<l1) mini_X=l1;

            ll maxi_X=r2/c;
            if(maxi_X>r1) maxi_X=r1;

            // Ensure the range [mini_X, maxi_X] is valid
            if (mini_X <= maxi_X)
                ans += (maxi_X - mini_X + 1);


           c*=k;
        }
        cout<<ans<<'\n';
    }

}



int main() {
    fastIO();
    solve();
    return 0;
}
