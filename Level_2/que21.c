#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("enter your number:\n");
    scanf("%d",&n);
    while(n!=0){
        int digit=n%10;
        if(digit%2!=0){
            count++;
        }
        n=n/10;
        
    }
    printf("%d",count);

}