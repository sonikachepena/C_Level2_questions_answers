#include<stdio.h>
int main(){
    int i=6;
    int sum=0;
    loop: if(i>0){
        sum=sum+i;
        i--;
        goto loop;
    }
    printf("the sum is:%d",sum);
}