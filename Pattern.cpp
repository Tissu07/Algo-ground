#include <bits/stdc++.h>
using namespace std;

// void test(int n){
//     for(int i=0; i<n; i++)
//     cout<<"hello world";
// }

void pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<j;
        }
    cout<<"\n";
    }
}

void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i;
        }
    cout<<"\n";
    }
}

void pattern3(int n){
    for(int i=n; i>=0; i--){
        for(int j=i; j>0; j--){
            cout<<j;
        }
    cout<<"\n";
    }
}


int main (){
    int t;
    cin>>t;
    for(int i = 0;i<t; i++){
        int n;
        cin>>n;
        // test(n);
        pattern3(n);
    }
}