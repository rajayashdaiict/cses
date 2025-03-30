#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define int long long
#define first ff
#define second ss
 
void test_case() {
    int a = 7; //  0111
    int b = 4; //  0100

    // Bitwise AND
    int bitwise_and = a & b;

    // Bitwise OR
    int bitwise_or = a | b;

    // Bitwise XOR
    int bitwise_xor = a ^ b;

    // Bitwise NOT
    int bitwise_not = ~b;

    // Bitwise Left Shift --> moves the bits to left and fills the empty space with 0
    int left_shift = 5 << 2;

    // Bitwise Right Shift --> moves the bits to right, so decresing the number
    int right_shift = 16 >> 2;

      // Printing the Results of
    // Bitwise Operators
    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT b: " << bitwise_not << endl;
    cout << "Left Shift: " << left_shift << endl;
    cout << "Right Shift: " << right_shift << endl;

}
 
signed main() {
    fast_io;
    int T = 1;
    cin >> T;
    while(T--) test_case();
}