
//    **********
//    ****  ****
//    ***    ***
//    **      **
//    *        *
//    *        *
//    **      **
//    ***    ***
//    ****  ****
//    **********
 
#include<bits/stdc++.h>
using namespace std;
void print_p(int n) {
    int iniS = 0;
    for(int i=0;i<n;i++){
        //Stars
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
        //Space
        for(int j =0; j<iniS;j++){
            cout<<" ";
        }
        //Stars
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
     iniS = 2*n -2;
    for(int i=0;i<n;i++){
        //Stars
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        //Space
        for(int j =0; j<iniS;j++){
            cout<<" ";
        }
        //Stars
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    print_p(t);
}