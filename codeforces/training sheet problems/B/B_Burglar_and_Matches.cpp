#include <bits/stdc++.h>
using namespace std;

// The most famous Type Aliases
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


// int n ;
// cin>>n;
// vi v(n);
// for(auto& i:v) cin>>n;


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
    int n,m;
    cin>>n>>m;
    int jj=0;
    vector<pair<int,int>> v;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(all(v),greater<pair<int,int>>());
    for(int i=0;i<m;i++){
        if(v[i].second>=n){
            jj+=n*v[i].first;
            break;
        }else{
                jj+=v[i].second*v[i].first;
                n=n-v[i].second;
        }

    }
    cout<<jj;
    
}

int main() {
    fast_io();

        solve();
    
    return 0;
}