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
    int n,a;
    cin>>n>>a;
    vi v(n);
    vi l;
    vi r;
    int sm=2;
    int kk=0;
     for(auto& i:v)cin>>i;
    if(v[a-1]==1){
        kk++;
    }
   
    for(int i=a;i<n;i++){
        r.push_back(v[i]);
    //     if(i-sm>=0){
    //          if((v[i]==1 && v[i-sm]==1) ){
    //             kk+=2;
    //     }}
    // else{
    //         if(v[i]==1){
    //             kk++;
    //         }
    //     }
    //     sm+=2;
    // }
    // cout<<kk;

}

for(int i=a-2;i>=0;i--){
    l.push_back(v[i]);

}
int y=max(l.size(),r.size());
int x=min(l.size(),r.size());
for(int i=0;i<y;i++){

    if(i<x){
        if(l[i]==1 && r[i]==1){
            kk+=2;
        }
    }else if(l.size()==y){
        if(l[i]==1){
            kk++;
        }
    }else if(r.size()==y){
        if(r[i]==1){
            kk++;
        }
    }
}
cout<<kk;
}

int main() {
    fast_io();

        solve();
    
    return 0;
}