#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int fib(int n) {
    if(n==1) { return 0; }  // fib(1)=0
    if(n==2) { return 1; }  // fib(2)=1
    else {
        return fib(n-1) + fib(n-2);
    }
}


void solve() {
    int N;
    cin >> N;  // Read the number of Fibonacci numbers to print

    // Print the Fibonacci sequence using the recursive function
    for (int i = 1; i <= N; ++i) {
        cout << fib(i)<<" ";
    }
    cout << endl;  // Print a newline at the end

}

int main() {
    solve();
    fastIO();

    return 0;
}