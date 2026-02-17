
//1
//23
//456
//78910

#include<bits/stdc++.h>
using namespace std;
void print_p(int n) {
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    print_p(t);
}