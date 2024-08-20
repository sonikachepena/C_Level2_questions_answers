#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter your number:\n");
    scanf("%d",&n);
    if(n==0){
        sum=0;
    }else{
        while(n!=0){
            
            sum+=n%10;
            n=n/10;

        }
    }
    printf("the sum:%d",sum);

}