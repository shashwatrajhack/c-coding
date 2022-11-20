#include<iostream>
 using namespace std;

 int a = 45;

 int main(){
    int a,b,c;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    cout<<"enter the value of c:"<<endl;
    cin>>c;

    a=b+c;

    cout<<"the sum is "<<a<<endl;
    cout<<"THe global a is "<<::a;
    return 0;
 }