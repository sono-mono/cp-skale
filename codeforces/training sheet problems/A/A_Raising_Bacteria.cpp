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
    int b=2;
    int s=0;
    while(n>1){
    while(true){
        if(b<n){
            if(b*2>n){
                break;
            }else{
                b*=2;
                
            }
        }else{
            break;
        }
           
    }
    s++; 
    n=n-b;
    b=2;
    
}
 if(n==1){
    cout<<s+1;
 }
 else{
    cout<<s;
 }
    
}
     

int main() {
    fast_io();

        solve();
    
    return 0;
}