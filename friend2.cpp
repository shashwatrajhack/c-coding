#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    freind void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val1 = a;
    }
    void display(void){
        cout<<val1<<endl;
    }
};

class c2{
    int num2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int b){
        num2 = b;

    }
    void display(void){
        cout<<num2<<endl;
    }
};

void exchange(c1 &x,c2 &y){
    int temp = x.val1;
    x.val1 = y.num2;
    y.num2 = temp;

}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(54);
    exchange(oc1,oc2);

    cout<<"the value of oc1 after exchange become"<<endl;
    oc1.display();
    cout<<"the value of 0c2 after exchange become"<<endl;
    oc2.display();
    return 0;

}