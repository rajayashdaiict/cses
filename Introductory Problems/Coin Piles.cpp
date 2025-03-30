#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss
 
void test_case() {
    int a,b;
    cin>>a>>b;
    int temp = a+b;
    if(a==0 && b==0){
        cout<<"YES"<<endl;
        return;
    }
    if((a>2*b) || (b>2*a) || a==0 || b==0){
        cout<<"NO"<<endl;
        return;
    }
    if(temp%3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
 
signed main() {
    fast_io;
    int T = 1;
    cin >> T;
    while(T--) test_case();
}