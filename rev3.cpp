#include<iostream>
#include<string>
using namespace std;

class myClass{
    public:
    int myNum;
    string myString;
};

int main(){
    myClass myObj;
    myObj.myNum = 15;
    myObj.myString = "My c++ will be completed by 5 december";

    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;
    return 0;
}