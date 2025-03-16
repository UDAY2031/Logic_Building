#include<bits/stdc++.h>
using namespace std;
void shape(int n){
    int space = 0;
    for(int i =0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<'*';
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<'*';
        }
        space += 2;
        cout<<endl;
        
    }
}
void s1(int n){
    int space = 8;
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<'*';
        }
        for(int j = 1;j<=space;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<'*';
        }
        space -= 2;
        cout<<endl;
        
    }
}
int main(){
    int n;
    cout<<"Enter the n value";
    cin>>n;
    
    shape(n);
    s1(n);
}
