#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    loop:if(i<6){
        sum=sum+i;
        i++;
        goto loop;
    }
    printf("the sum is:%d",sum);
}