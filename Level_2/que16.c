#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int isprime=1;
    printf("enter your number:\n");
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;

        }
    }
    if(isprime){
        printf("it is prime\n");
    }else{
        printf("not prime");
    }
}