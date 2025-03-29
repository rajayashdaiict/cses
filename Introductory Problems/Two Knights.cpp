#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss
// shit solution mostly, dont make any sense but it works though
void test_case() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<0<<endl;
        }else if(i==2){
            cout<<6<<endl;
        }else if(i==3){
            cout<<28<<endl;
        }else if(i==4){
            cout<<96<<endl;
        }else{
            int ans = ((48 + (i-4)*40) + (((i-4)*(i-4))*8))/2;
            int temp = i*i;
            int ans2 = (temp*(temp-1))/2;
            cout<<ans2-ans<<endl;
            // cout<<ans<<endl;
        }
    }
}
 
signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}