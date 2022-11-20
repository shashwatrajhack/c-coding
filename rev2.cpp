//constants,manipulators and operator precedence in c++
//In c++ language manipulators are used in the formatting of output.
//the two most common manipulators are :"endl" and "setw"
//endl--> used for the next line.
//setw-->used to specify the width of the output.

#include<iostream>
using namespace std;

int main(){

    int a=3,b=78,c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"the value of a is:"<<setw('5')<<a<<endl;
    cout<<"the value of b is:"<<setw('5')<<b<<endl;
    cout<<"the value of c is:"<<setw('5')<<c<<endl;

    return 0;

}