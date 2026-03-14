#include<bits/stdc++.h>
using namespace std;
int maxx(int num1 , int num2){
    if(num1>=num2){
        return num1;
    }
    return num2;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
   /* int minimum = min(num1,num2);
    cout<<minimum;*/
    int maximum = maxx(num1,num2);
    cout<<maximum;
    return 0;

}