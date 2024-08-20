#include<stdio.h>
int main(){
    int n;
    int rev=0;
    printf("enter your number:\n");
    scanf("%d",&n);
    if(n==0){
        rev=0;
    }else{
        while(n!=0){
            rev=rev*10+n%10;
            n/=10;

        }
    }
    printf("the reverse:%d",rev);

}