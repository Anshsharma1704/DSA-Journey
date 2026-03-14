#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age < 18){
        cout<<"Not Eligible";
    }
    else if(age<=57){
        cout<<"Eligible for job";
        if(age >= 55){
            cout<<", but retirement soon";
        }
    }
    else{
        cout<<"Retirement time";
    }
    return 0;
} 
