#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>

#include <map>
#include <set>

#include <stack>
#include <queue>

#include <unordered_map>
#include <unordered_set>

using namespace std;

/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ull,null_type,less<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedSet;
typedef tree<ull,null_type,less_equal<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedMultiSet;

#define findBO find_by_order
#define findBK order_of_key
*/

#define all(a) a.begin(), a.end()

typedef unsigned long long ull;
typedef pair<ull, ull> pii;
typedef vector<ull> vi;

#define MAX 1000100
#define MOD 1000000007

vector<ull> a;
vector<ull> b;
ull n, x;

void solve(){
    a.clear(); b.clear();
    cin>>n>>x;
    vector<ull> times(n, 1);
    for(int i=0; i<n; i++){
        ull z; cin>>z;
        a.push_back(z);
    }

    for(int i=0; i<a.size(); i++){
        if(a[i]%x)
            break;
        a.push_back(a[i]/x);
        times.push_back(times[i]*x);
    }

    ull ans = 0;
    for(int i=0; i<a.size(); i++){
        ans += a[i]*times[i];
    }

    cout<<ans<<"\n";

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

