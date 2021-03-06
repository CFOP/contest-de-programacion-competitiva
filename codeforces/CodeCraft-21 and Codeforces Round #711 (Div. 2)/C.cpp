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

#include <time.h>

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

typedef long long ull;
typedef pair<ull, ull> pii;
typedef vector<ull> vi;

#define MAX 1000100
#define MOD 1000000007

vector<ull> a;
vector<ull> b;
ull n, m, k;
string s;

void solve(){
    a.clear(); b.clear();
    cin>>n>>k;

    vector<vector<ull>> dp(k+1, vector<ull>(n+1, 0));

    ull ans = 1;
    ull particles = 1;
    for(int i=0; i<k; i++){

        if(i%2)
            for(int j=n-1; j>=0; j--){
                ans += dp[i][j];
                ans %= MOD;

                dp[i+1][j] += particles;
                dp[i+1][j] %= MOD;

                particles += dp[i][j];
                particles %= MOD;
            }
        else
            for(int j=0; j<n; j++){
                ans += dp[i][j];
                ans %= MOD;

                dp[i+1][j] += particles;
                dp[i+1][j] %= MOD;

                particles += dp[i][j];
                particles %= MOD;
            }

        particles = 0;
    }

    cout<<ans<<"\n";

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    //srand (time(NULL));

    int t=1; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

