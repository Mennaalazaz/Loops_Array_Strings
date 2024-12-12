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
    int sumGrades[n];
    for(int i=0;i<n;i++) {
        int s=0;
        for(int j=0;j<5;j++) {
            int grade; cin>>grade;
            s+=grade;
        }
        sumGrades[i]=s;
    }

    for(int i=0;i<n;i++) {
        int maxi=INT_MIN;
        int maxiIdx=-1;
        for(int j=0;j<n;j++) {
            if(sumGrades[j]>maxi) {
                maxi=sumGrades[j];
                maxiIdx=j;
            }
        }
        sumGrades[maxiIdx]=-1;
        cout<<maxiIdx+1;
        if(i!=n-1) cout<<" ";
    }

}


int main() {
    fastIO();
    solve();
    return 0;
}
