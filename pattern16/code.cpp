#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
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
