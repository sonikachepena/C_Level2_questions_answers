#include<stdio.h>
int main(){
    int n;
    printf("enter your number:\n");
    scanf("%d",&n);
    int last_digit= n%10;
    if(last_digit%2!=0){
        n=n-1;
    }
    printf("the num:%d",n);
}