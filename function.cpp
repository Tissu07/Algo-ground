#include<bits/stdc++.h>
using namespace std;

void printName(){
    cout<<"void function";
}

void print(string name){
    cout<<"hey"<< name;
}

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int main(){
    printName();
    string name;
    cin>>name;
    print(name);

    int num1, num2;
    cin>>num1>>num2;

    int res = sum(num1,num2);
    cout<<"sum is"<<res;
    return 0;
}