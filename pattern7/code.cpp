#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"Enter the n value"<<endl;
        cin>>n;
        pattern(n);
    }
}
