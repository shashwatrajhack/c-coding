#include<iostream>
using namespace std;

int main(){
    int a,b,result_a,result_b,result2_a,result2_b;
    cin>>a>>b;

    result_a=++a;
    result_b=++b;

    result2_a=--a;
    result2_b=--b;


    cout<<"increased value of a = "<<result_a<<endl;
    cout<<"increased value of b = "<<result_b<<endl;

    cout<<"decreased value of a = "<<result2_a<<endl;
    cout<<"decreased value of b = "<<result2_b<<endl;

    return 0;


}