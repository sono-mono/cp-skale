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
    vector<ll> v(n);
    for(auto& i:v) cin>>i;
    // for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
                ll m;
                m=v[j];
                v[j]=v[j+1];
                v[j+1]=v[j+1]+m;
            }
     
        }
            //    vector<ll> nn(v);
            // sort(all(nn));
            // if(v==nn){
            //     break;
            // }
    // }
    cout<<v.back()<<"\n";
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