#include<bits/stdc++.h>
using namespace std;
void shape(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        char ch = 'A';
        int break_point = (2*i+1)/2;
        for(int j =1;j<= 2*i+1;j++){
            cout<<ch;
            if(j <= break_point) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<' ';
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
