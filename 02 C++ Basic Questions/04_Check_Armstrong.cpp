#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while(n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int x) {
    int original = x;
    int digits = countDigits(x);   // store digit count
    long long arm = 0;

    while(x != 0){
        int ln = x % 10;
        arm = arm + pow(ln, digits);  // use fixed digit count
        x /= 10;
    }

    return original == arm;
}

int main() {
    int n;
    cin >> n;
    cout << isArmstrong(n);
    return 0;
}