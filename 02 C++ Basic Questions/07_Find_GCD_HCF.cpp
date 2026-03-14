#include<bits/stdc++.h>
using namespace std;

void Find_GCD(int a , int b) {
    int gcd = 1;
    for(int i = 1; i <= min(a, b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << gcd << endl;
}
int main() {
    int a, b;
    cin >> a >> b;
    Find_GCD(a, b);
    return 0;
}