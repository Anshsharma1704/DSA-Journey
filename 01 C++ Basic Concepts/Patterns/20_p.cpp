
//  *        *
//  **      **
//  ***    ***
//  ****  ****
//  **********
//  ****  ****
//  ***    ***
//  **      **
//  *        *

#include<bits/stdc++.h>
using namespace std;
void print_p(int n) {
    int spaces = 2*n -2;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        //Stars
        for(int j = 1 ;j<=stars;j++){
            cout<<"*";
        }
        //Spaces
        for(int j = 1; j <= spaces; j++){
            cout<<" ";
        }
        //Stars
        for(int j = 1 ;j<=stars;j++){
            cout<<"*";
        }
        if (i<n) spaces -=2;
        else spaces +=2;
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    print_p(t);
}