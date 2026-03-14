#include<bits/stdc++.h>
using namespace std;

void Reverse_number(int n) {
    int reversed = 0;
    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Reverse_number(n);
    return 0;
}