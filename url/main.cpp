#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string url; getline(cin, url);
    for (int i = 0; i < url.size(); i++) {
        if(url[i]=='?') { // start from '?'
            i++; // Get second character after '?'
            for(int j=i; j<url.size(); j++) {
                if(url[j]=='=') {
                    cout<<": ";
                    continue;
                }
                if(url[j]=='&') {
                    cout<<endl;
                    continue;
                }
                cout<<url[j];
            }
        }
    }
}



int main() {
    fastIO();
    solve();

    return 0;
}
