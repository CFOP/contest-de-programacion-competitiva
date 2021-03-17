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
ull n, m;
string s;

void solve(){
    a.clear(); b.clear();
    cin>>n>>m;


    map<ull, ull> c;
    for(int i=0; i<n; i++){
        ull z; cin>>z;
        a.push_back(z);

        c[z%m]++;
    }

    ull ans = 0;

    if(c[0])
        ans++;

    for(int i=1; i<m; i++){

        if(c[m-i] && c[i]){
            int d = min(c[m-i], c[i]);
            c[m-i] -= d;
            c[i] -= d;
            ans++;

            if(i == m-i)
                c[i] = 0;

            if(c[i])
                c[i]--;
            else if(c[m-i])
                c[m-i]--;
        }


        if(c[i]){
            ans+=c[i];
            c[i]=0;
        }

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

