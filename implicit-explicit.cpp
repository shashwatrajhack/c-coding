#include<iostream>
using namespace std;

int main(){
    int num_int;
    double num_double = 55.87;

    //implicit conversion
    //assigning a double value to the int variable

    num_int = num_double;

    cout<<"num_int is"<<num_int<<endl;
    cout<<"num_double is"<<num_double<<endl;

    return 0;
}