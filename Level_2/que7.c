#include<stdio.h>
int main(){
    int i;
    for(i=10;i<=99;i++){
        int a= i%10;
        int b= i/10;
        if(i%2!=0 && ((a+b)==7) ){
            printf("%d\n",i);
        }
    }
}