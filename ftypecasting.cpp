//It usually tells the compiler about the upcoming functions.
//syntax: type function-name(arguments).

#include<iostream>
using namespace std;

int sum (int a,int b);

int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}