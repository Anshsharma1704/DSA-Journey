#include <iostream>
using namespace std;
    bool isPalindrome(int x) {

        if(x < 0) return false;

        int original = x;
        long long rev = 0;

        while(x != 0){
            int ln = x % 10;
            rev = rev * 10 + ln;
            x /= 10;
        }

        return original == rev;
    }

int main() {
    int n;
    cin >> n;
    cout << isPalindrome(n);

    return 0;
}