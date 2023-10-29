#include<iostream>
using namespace std;

int power(){
    int num1,num2;
    cin>>num1>>num2;
    int ans = 1;

    for(int i=1;i<=num2;i++){
        ans = ans*num1;
    }

    return ans;
}

int main(){

   /* int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

    int answer = power(a,b);*/


    cout<<"answer is"<<power()<<endl;

    return 0;
}