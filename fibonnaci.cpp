#include<iostream>
using namespace std;

class solution{
    public:

    int fib(int n){
        //base case
    for(int i =0;i<n;i++)
        if(n==0||n==1){
             return 0;
        }
       
        
       

        int ans = fib(n-1) + fib(n-2);

        return ans;
    }
};
