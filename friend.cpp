#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int add(int a,int b){
        return(a+b);
    }

    int sumRealComplex(complex , complex);
};

class complex{
    int a,b;
    friend int calculator::sumRealComplex(complex ,complex);
    public

};
