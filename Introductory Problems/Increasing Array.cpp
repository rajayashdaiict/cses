#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss

void test_case() {
    int n;
    cin>>n;
    int ans=0;
    int prev;
    int temp;
    for(int i=0;i<n;i++){
        if(i==0){
            cin>>temp;
            prev=temp;
        }
        else {
            cin>>temp;
            if(temp<prev){
                ans +=prev-temp;
            }
            else{
                prev=temp;
            }
        }
    }
    cout<<ans<<endl;
}

signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}