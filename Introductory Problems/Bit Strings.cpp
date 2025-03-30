#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss
int mod = 1000000007;

int pow1(int a, int n){
    int ans = 1;
    while(n>0){
        if((n&1) == 1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        n=n>>1;
    }
    return ans;
}
 
void test_case() {
    int n;
    cin>>n;
    cout<<pow1(2,n);

}

signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}