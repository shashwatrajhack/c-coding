#include<iostream>
using namespace std;


typedef struct employee{
    int eId;
    char favchar;
    float salary;
}ep;

union money{
    int rice;
    char car;
    float pound;
};
int main(){
    ep harry;
    union money m1;
    m1.rice=56;
    m1.car;
    cout<<m1.car;
    return 0;
}
