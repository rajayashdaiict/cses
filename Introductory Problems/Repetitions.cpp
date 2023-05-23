#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss

void test_case() {
    string s;
    cin>>s;
    int ans = 1;
    int curr = 1; 
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            curr++;
        }
        else {
            ans = max(curr,ans);
            curr=1;
        }
    }
    ans = max(curr,ans);
    cout<<ans<<endl;
}

signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}