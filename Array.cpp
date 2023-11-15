#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i = 0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
   
}

int main(){

    int a[10] = {2,3};
    int n = 10;
    printArray(a,10);
    cout<<"A is an array"<<endl<<a[0]<<endl;

    int number[15] = {1,5,6,7};
    n = 15;
    printArray(number,15);
    cout<<"Everything is mine"<<endl<<number[8]<<endl;

    int third[20] = {4,52,65};
    n = 20;
    printArray(a,10);


    cout<<"everything is fine"<<endl;
}