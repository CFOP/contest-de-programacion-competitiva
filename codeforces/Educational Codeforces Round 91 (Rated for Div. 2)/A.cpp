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

#define MAX 1000100
#define MOD 1000000007

typedef long long ull;

/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ull,null_type,less<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedSet;
typedef tree<ull,null_type,less_equal<ull>,rb_tree_tag, tree_order_statistics_node_update> orderedMultiSet;

#define findBO find_by_order
#define findBK order_of_key
*/

vector<ull> a;
vector<ull> b;
ull n;

void solve(){
    a.clear(); b.clear();
    cin>>n;
    int m = 0;
    for(int i=0; i<n; i++){
        int z; cin>>z;
        a.push_back(z);
    }

    for(int j=1; j<n-1; j++){

        int i, k;

        for(i=0; i<j; i++)
            if(a[j]>a[i])
                break;
        if(i==j)
            continue;

        for(k=j+1; k<n; k++)
            if(a[j]>a[k])
                break;
        if(k==n)
            continue;

        cout<<"YES\n";
        cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
        return;
    }

    cout<<"NO\n";
    return;
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

