#include <bits/stdc++.h>
using namespace std;

// The most famous Type Aliases
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// The most famous Macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < b; ++i)

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n;
    cin>>n;
    vi v(n);
    int sm=0;
    for(auto& i:v) cin>>i;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]>v[i]){
                v[j]=v[i];
                break;
            }
        }
    
    }
    for(auto& i:v) sm+=i;
    cout<<sm<<"\n";
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}