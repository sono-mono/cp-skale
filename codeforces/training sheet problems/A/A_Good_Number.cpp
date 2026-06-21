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
    int n,k;
    cin>>n>>k;
    set<int> cc;
    set<int> vv;
    cc.insert(0);
    for(int i=0;i<=k;i++){
        cc.insert(i);


    }
    int gm=0;
    while(n--){
        ll a;
        cin>>a;
        string b=to_string(a);
        for(const auto& i:b){
            int g=i-'0';
            vv.insert(g);


        }
       if (std::includes(vv.begin(), vv.end(),
                      cc.begin(), cc.end())){
                        gm++;
                      }
        vv.clear();
       

    }
    cout<<gm;
    
}

int main() {
    fast_io();

    solve();
    return 0;
}