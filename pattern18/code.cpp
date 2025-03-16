#include<bits/stdc++.h>
using namespace std;
void shape(int n){
    for(int i=0;i<n;i++){
        for(char c = 'E'-i;c<='E';c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the n value";
    cin>>n;
    
    shape(n);
}
