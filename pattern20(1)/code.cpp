#include<bits/stdc++.h>
using namespace std;
void shape1(int n){
    int s = 8;
    for(int i = 0;i<n;i++){
        for(int j =0;j<i+1;j++){
            cout<<'*';
        }
        for(int j = 1;j<=s;j++){
            cout<<" ";
        }
        for(int j =0;j<i+1;j++){
            cout<<'*';
        }
        s -= 2;
        cout<<endl;
    }
}
void shape2(int n){
    int s = 2;
    for(int i = 0;i<n;i++){
        for(int j =1;j<=n-i-1;j++){
            cout<<'*';
        }
        for(int j = 1;j<=s;j++){
            cout<<" ";
        }
        for(int j =1;j<=n-i-1;j++){
            cout<<'*';
        }
        s += 2;
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the n value";
    cin>>n;
    
    shape1(n);
    shape2(n);
    
}
