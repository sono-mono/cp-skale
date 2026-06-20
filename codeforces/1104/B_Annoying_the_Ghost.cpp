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
    set<int> p(n);
    for(auto& i:v) cin>>i;
    for(auto& i:p) cin>>i;
    int m=0;
    int sm=0;
    vi oo(v);
  
    
    sort(all(oo));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]>p[j]){
                m++;
            }

        }
        if(m==n){
            break;
        }
        m=0;
    }

    if(m==n){
        cout<<-1<<"\n";
    }else{
        for(int i=0;i>n-1;i++){
            if(v[i]<v[i-1] && v[i-1]>v[i+1]){
                sm++;
                swap(v[i], v[i-1]);

            }
        }
        
    }
    cout<<sm<<"\n";
}
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