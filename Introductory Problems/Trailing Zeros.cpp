#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss
 
void test_case() {
    int n;
    cin>>n;
    int ans = 0;
    int temp5 = 5;
    while(temp5<=n){
        ans += n/temp5;
        temp5*=5;
    }
    // int ans = n/5;
    cout<<ans;
}
 
signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}