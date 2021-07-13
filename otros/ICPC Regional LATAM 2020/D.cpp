//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>

#include <map>
#include <set>

#include <stack>
#include <queue>

#include <unordered_map>
#include <unordered_set>

#include <cmath>
#include <climits>
#include <ctime>
#include <cassert>

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

typedef unsigned long long ull;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;

/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ull,null_type,less<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedSet;
typedef tree<ull,null_type,less_equal<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedMultiSet;

#define findBO find_by_order
#define findBK order_of_key
*/

const ll MAX = 1000100; //10^6
const ll MOD = 1000000007;

/////////////////importado de KACTL/////////////////
// Fuente: https://github.com/kth-competitive-programming/kactl
// Pegar aqui cosas de katl necesarias



///////////////////////////////////////////////////

vector<ll> a;
vector<ll> b;
ll n, m;
string s;

void solve(){
    a.clear(); b.clear();
    priority_queue<ll, vector<ll>, greater<ll>> nxt;
    cin>>n;
    for(int i=0; i<n; i++){
        ll z; cin>>z;
        nxt.push(z);
    }

    if(n==1){
        cout<<"N\n";
        return;
    }

    bool another = false;
    while( (nxt.size() + (int)another)>2){
        ll x = nxt.top();
        nxt.pop();

        if(nxt.top() != x){
            if(another){
                cout<<"N\n";
                return;
            }
            else {
                another = true;
                continue;
            }
        }

        nxt.pop();
        nxt.push(x+1);
    }

    if((nxt.size() + (int)another)==2){
        cout<<"Y\n";
    }
    else
        cout<<"N\n";
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    // revisa que el input tenga sentido,
    // si no arroja el error cin.failbit
    cin.exceptions(cin.failbit);

    //srand (time(nullptr));

    int t=1; //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

