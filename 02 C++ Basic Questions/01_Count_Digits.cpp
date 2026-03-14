// C++ program to count the number of digits in a given number

#include<bits/stdc++.h>
using namespace std;

void countDigits(int n) {
    int count = 0;
    while(n > 0) {
        n /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    countDigits(n);
    return 0;
}