
//      *
//     ***
//    *****
//   *******

#include<bits/stdc++.h>
using namespace std;
void print_p(int n) {
    for(int i=0;i<n;i++){
        //Space
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        //Star
        for(int j =0; j<(2*i+1);j++){
            cout<<"*";
        }
        //Space
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    print_p(t);
}