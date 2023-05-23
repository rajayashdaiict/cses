#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss

void test_case() {
    int input;
    cin>>input;
    cout<<input<<" ";
    while(input!=1){
        if(input%2==0){
            input=input/2;
        }
        else 
            input=input*3+1;
        cout<<input<<" ";
    }
}

signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}