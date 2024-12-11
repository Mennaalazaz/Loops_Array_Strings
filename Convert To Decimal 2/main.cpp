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
        int n; cin>>n;
        int countOnes=0;
        while(n) {
            if(n%2==1) countOnes++;
            n/=2;
        }

        int newNumber;
        for(int i=0;i<countOnes;i++) {
            newNumber+= pow(2,i);
        }
        cout<<newNumber<<endl;
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}



