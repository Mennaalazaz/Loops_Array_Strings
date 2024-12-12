#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int lastDigit ;
int reverse(int n) {

    int reveresd=0;
    while (n) {
        lastDigit= n%10;
        n/=10;
        reveresd =lastDigit+ reveresd*10;
    }

    return reveresd;
}

void solve() {
    int n;
    cin>>n;
    int lead=n;
    while(lead%10==0) {
        lead/=10;
    }

    cout<<reverse(lead)<<endl;

    if(n==reverse(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main() {
    solve();
    fastIO();

    return 0;
}
