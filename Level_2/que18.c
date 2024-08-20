#include<stdio.h>
int main(){
    int n;
    printf("enter your number:\n");
    scanf("%d",&n);
    int isprime=1;
    int last_two=n%100;
    if(last_two<1){
        isprime=0;
    }else{
        for(int i=2;i<=last_two/2;i++){
            if(last_two%i==0){
                isprime=0;
                break;
            }
        }
    }
     if (isprime) {
        printf("The last two digits %d are prime.\n", last_two);
    } else {
        printf("The last two digits %d are not prime.\n", last_two);
    }
}