#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
}
int main(){
    int k;
    cout<<"Enter the testcases:";
    cin>>k;
    for(int i=0;i<k;i++){
        int n;
        cin>>n;
        pattern(n);
    }
}
