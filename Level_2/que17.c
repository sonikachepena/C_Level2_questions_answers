#include<stdio.h>
int main(){
    int n;
     int digit_sum;
    printf("enter your number:\n");
    scanf("%d",&n);
    int isprime=1;
    if(n<=1){
        isprime=0;
    }else{
        for(int i=2;i<n;i++){
            if(i%2==0){
                isprime=0;
                break;
            }
        }
    }
    int temp=n;
    while(temp>0){
        digit_sum=+temp%10;
        temp/=10;
    }

    if (isprime && digit_sum == 14) {
        printf("The number %d is prime and the sum of its digits is 14.\n", n);
    } else if (isprime) {
        printf("The number %d is prime but the sum of its digits is not 14.\n", n);
    } else if (digit_sum == 14) {
        printf("The number %d is not prime but the sum of its digits is 14.\n", n);
    } else {
        printf("The number %d is neither prime nor is the sum of its digits 14.\n", n);
    }
}