#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
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
