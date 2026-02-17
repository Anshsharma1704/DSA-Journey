
//A
//B B
//C C C
//D D D D
//E E E E E

#include<bits/stdc++.h>
using namespace std;
void print_p(int n) {
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<char('A'+i);
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    print_p(t);
}