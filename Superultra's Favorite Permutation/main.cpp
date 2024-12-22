#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define intCeil(a,b) (ll(a)+ll(b-1))/ll(b)

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


bool isPrime(ll n) {
    if(n==1 || n==0) return false;
    if(n==2) return true;
    if(n%2==0) return false; // Any Even except 2 is Not Prime
    for(ll i=2; i*i<=n; i++) { // if n is divisible by number from 2 to √ n then not prime
        if(n%i==0) return false;
    }
    return true;
}
/*
If 𝑛 has any divisor other than 1 and itself, it must appear in pairs. For example:
    If 𝑛=36, the divisors are: 1,2,3,4,6,9,12,18,36.
       Notice that divisors pair up to produce 𝑛:
               1*36 2*18 3*12 4*9 6*6
      The smaller divisor in each pair is always less than or equal to √ n
 */

void solve() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n<=4) {
            cout<<-1<<endl;
            continue; // to continue next test case
        }

        deque<int> Even,Odd;
        for(int i=1;i<=n;i+=2) Odd.push_back(i);
        for(int i=2;i<=n;i+=2) Even.push_back(i);
        while(isPrime(Even.back()+ Odd.front())) {
            Odd.push_front(Odd.back());
            Odd.pop_back();
        }
        for(auto i:Even) {  cout<<i<<" ";}
        for(auto i:Odd) {  cout<<i<<" ";}
        cout<<endl;
    }
}



int main() {
    fastIO();
    solve();
    return 0;
}
