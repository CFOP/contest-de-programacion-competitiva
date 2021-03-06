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

#define MAX 1000100
#define MOD 1000000007

vector<ull> a;
vector<ull> b;
ull n;

void solve(){
    a.clear(); b.clear();
    cin>>n;
    string s; cin>>s;

    int one(0), zero(0);
    int oneL(0), zeroL(0);
    for(char c : s)
        if(c=='0') zero++;
        else one++;

    for(char c : s){
        if(c=='0'){
            if(!oneL)
                cout<<c;
            if(oneL && !zeroL)
                cout<<c;
            zero--;zeroL++;
        }
        else {

            if(!zero)
                cout<<c;

            one--;oneL++;
            if(oneL==1)
                zeroL=0;
        }
    }

    cout<<"\n";

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

