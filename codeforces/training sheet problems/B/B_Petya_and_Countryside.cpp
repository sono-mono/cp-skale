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
    int n;
    cin>>n;
    vi v(n);
    for(auto& i:v) cin>>i;
    vi o;
    int sm=1;
    // sort(all(v));
    // int ms=v.back();
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            if(v[i]>=v[j] &&v[j]<=v[j-1]){
                sm++;
            }else{

                break;
            }
        }
        for(int k=i-1;k>=0;k--){

            if(v[i]>=v[k] &&v[k]<=v[k+1]){
                sm++;
            }else{

                break;
            }
        }

        o.push_back(sm);
        sm=1;



     
    }
    
    sort(all(o));
    cout<<o.back();
}

int main() {
    fast_io();

        solve();
    
    return 0;
}