#include<bits/stdc++.h>
using namespace std;
void shape1(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<'*';
        }
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<'*';
        }
        cout<<endl;
        
    }
}
void shape2(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<'*';
        }
        for(int j=2*(n-i-1);j>=1;j--){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<'*';
        }
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
