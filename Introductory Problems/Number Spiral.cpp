#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss
 
void test_case() {
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int answer = 0;
        int big = max(x,y);
        answer += (big-1)*(big-1);
        if(big%2==0){
            //new line is starting at column
            answer += x + (big - y);
        }else{
            //new line is stargint at row
            answer += y + (big - x);
        }
        cout<<answer<<endl;
    }
}
 
signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}