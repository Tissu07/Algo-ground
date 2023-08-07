#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter your Age";
    cin >> age;

    if(age>=18){
        cout << "You are an adult!";
    }
    else if(age >= 12){
        cout << "You are tenager!";
    }
    else{
        cout << "You are child!";
    }

    return 0;
}