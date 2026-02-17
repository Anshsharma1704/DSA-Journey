#include<iostream>
using namespace std;
int main(){
    string s = "Anshxboss";
    cout<<s[0]<<s[1]<<endl;
    int len = s.size();
    cout<<s[len-1]<<endl;
    s[len-1]='z';
    cout<<s;
    return 0;
}