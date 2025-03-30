#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss

void printCharNTimes(char c,int n){
    cout<<string(n,c);
}
 
void test_case() {
    string s;
    cin>>s;
    vector<int> v(26, 0);
    int n = s.size();
    for(int i = 0; i <n ;i++){
        v[s[i]-65]++;
    }
    int positionOfOddChar = -1;
    for(int i = 0; i <26 ;i++){
        if(v[i]%2!=0){
            if(positionOfOddChar!=-1){
                cout<<"NO SOLUTION"<<endl;
                return;
            }
            positionOfOddChar=i;
        }
    }
    for(int i=0; i<26;i++){
        printCharNTimes(char(i+65), v[i]/2);
    }
    if(positionOfOddChar!=-1){
        printCharNTimes(char(positionOfOddChar+65), 1);
    }
    for(int i=25; i>=0;i--){
        printCharNTimes(char(i+65), v[i]/2);
    }

}
 
signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}