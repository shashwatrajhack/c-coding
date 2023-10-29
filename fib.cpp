#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int a = 0;
    int b = 1;
    int sum;

    for(int i=0;i<=n;i++){
        
        sum = a+b;
        b = sum;
        a = b
        cout<<sum<<endl;
    }
    
}