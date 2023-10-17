//subtract the sum and product of digits of an integer

#include<iostream>
using namespace std;

int main(){
    class solution{
        public:

        int subtractProdAndSum(int n){
            int prod = 1;
            int sum = 0;

            while(n!=0){
                int digit = n%10;
                prod = prod*digit;
                sum = sum+digit;

                n = n/10;

            }

            int answer = prod - sum;
            return answer;
        }
    };
}