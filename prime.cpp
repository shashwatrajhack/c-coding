#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    bool isPrime=1;

    for(int i=2; i<=n; i++){
        if(n%i==0){
           bool isPrime=0;
            break;

        }
        if(isPrime==0){
            cout<<"not a prime "<<endl;
        }
        else{
            cout<<"this is a primenumber"<<endl;
        }
    }
}