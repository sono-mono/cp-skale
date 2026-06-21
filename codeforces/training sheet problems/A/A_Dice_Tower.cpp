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
    int t;
    cin>>t;
    set<int> s={1,2,3,4,5,6};
    set<int> v;
    set<int> result;
    int h=0;
    int af=0;
    for(int i=0;i<n;i++){
        int l , r;
        cin>>l>>r;
        if(n==0){
            continue;;
            
        }else{
            int b=7-t;
            v={l,7-l,r,7-r};
            set_difference(s.begin(), s.end(),v.begin(), v.end(),std::inserter(result, result.end()));
            for(auto& j:result){

            if(j==b){
                h++;
                


            }else{
                t=j;
            }
        }
        if(h==0){
            cout<<"NO";
            af++;
            break;
        }else{

            h=0;
            result.clear();
            v.clear();
            


        }



        }
    }
    if(af==0){

        cout<<"YES";
    }

}

int main() {
    fast_io();

        solve();
    
    return 0;
}