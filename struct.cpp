#include<iostream>
using namespace std;

struct employee{
    int eId;
    char favchar;
    float salary;
};

int main(){
    struct employee John;
    John.eId = 1;
    John.favchar = 'c';
    John.salary = 120000;
    cout<<John.salary<<endl;
    cout<<John.eId<<endl;
    cout<<John.favchar<<endl;
    return 0;
}