#include<stdio.h>
int main(){
    int i;
    int sum=0;
    for(i=10;i<=99;i++){
        int a= i%10;
        int b= i/10;
        if(a==5){
            sum=sum+i;
        }
    }
    printf("the sum is :%d",sum);
}