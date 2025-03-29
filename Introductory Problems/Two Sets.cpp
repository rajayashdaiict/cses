#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss

int sumOfNNaturalNumbers(int n){
    return (n*(n+1))/2;
}

int findMid(int left, int right){
    return (left + right+1)/2;
}
 
void test_case() {
    int n;
    cin>>n;
    int sum = sumOfNNaturalNumbers(n);
    if(sum%2 != 0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int left = (n+1)/2;
    int right = n;
    bool isMidEqualMatch = false;
    int target = sum/2;
    int mid = findMid(left, right);
    while(right>mid){
        int midSum = sumOfNNaturalNumbers(mid);
        // cout<<left<<" "<<right<<" "<<mid<<" "<<midSum<<endl;
        if(target == midSum){
            isMidEqualMatch = true;
            break;
        }else if(midSum > target){
            right = mid;
            mid = findMid(left, right);
        }else{
            left = mid;
            mid = findMid(left, right);
        }
    }
    int ans1,ans2,extraInteger;
    if(isMidEqualMatch){
       ans1=mid;
       ans2=n-ans1;
       extraInteger=0; 
    }else{
        ans1=mid-1;
        ans2=n-ans1;
        extraInteger = sumOfNNaturalNumbers(mid) - target;
        // cout<<target<<" "<<sumOfNNaturalNumbers(mid)<<endl;
    }
    cout<<ans1<<endl;
    for(int i=1;i<=ans1+1;i++){
        if(i!=extraInteger){
            cout<<i<<" ";
        }
    }
    cout<<endl<<ans2<<endl<<extraInteger<<" ";
    for(int i=ans1+2;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
 
signed main() {
    fast_io;
    int T = 1;
    // cin >> T;
    while(T--) test_case();
}