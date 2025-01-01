#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(char j = 'A'; j <= 'A' + n-i-1;j++){
            cout<<j<<" ";
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
