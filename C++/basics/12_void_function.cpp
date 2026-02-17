#include<iostream>
using namespace std;

void printName(string name){
    cout<<"Hello! "<<name<<endl;
}
int main(){
    string name1;
    cin>>name1;
    printName(name1);
    return 0;
}