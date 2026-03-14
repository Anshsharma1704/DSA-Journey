#include<bits/stdc++.h>
using namespace std;

bool Check_Prime(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    cout << Check_Prime(n);
    return 0;
}