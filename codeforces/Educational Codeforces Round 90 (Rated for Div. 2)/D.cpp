#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;

typedef long long ull;

/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ull,null_type,less<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedSet;
typedef tree<ull,null_type,less_equal<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedMultiSet;

#define findBO find_by_order
#define findBK order_of_key
*/

#define MAX 200100
#define MOD 1000000007

vector<ull> a;
ull n;

void solve(){
    a.clear();
    cin>>n;
    for(int i=0; i<n; i++){
        ull z; cin>>z;
        a.push_back(z);
    }

    int k = (n-1)/2;

    ull total = 0;
    for(int i=0; i<n; i+=2)
        total += a[i];

    ull ans = total;
    ull m = 0, S = 0;
    for(int i=1; i<n; i+=2){
        S += a[i]-a[i-1];
        ans = max(ans, total + S-m);
        m = min(S, m);
    }

    m = 0, S = 0;
    for(int i= (n-2)%2?n-2:n-3; i>0; i-=2){
        S += a[i]-a[i+1];
        ans = max(ans, total + S-m);
        m = min(S, m);
    }


    cout<<ans<<"\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/*
1
8
1 7 3 4 7 6 2 9

1
5
1 2 1 2 1

1
10
7 8 4 5 7 6 8 9 7 3
*/
