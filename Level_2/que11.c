#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter your number:\n");
    scanf("%d",&n);
    if(n==0){
        count=1;
    }else{
        while(n!=0){
            count++;
            n=n/10;
        }
    }
    printf("the count:%d",count);

}