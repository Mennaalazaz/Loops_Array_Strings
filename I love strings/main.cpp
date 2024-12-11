#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int t; cin>>t;
    while(t--) {
        string s,t; cin>>s>>t;
        int lenS=s.length();
        int lenT=t.length();

        int n=(lenS<lenT)? lenS:lenT; // loop on smallest size
        for(int i=0;i<n;i++) {
            cout<<s[i]<<t[i];
        }
        // print rest
        if(lenS>lenT) {
            for(int i=n;i<lenS;i++) {
                cout<<s[i];
            }
        }
        else {
            for(int i=n;i<lenT;i++) {
                cout<<t[i];
            }
        }
        cout<<endl;


    }
}
int main() {
    fastIO();
    solve();

    return 0;
}
