#include<stdio.h>
int main(){
    int i;
    int pre=1000;
    for(i=1000;i<=9999;i++){
        if(i%7==0 && i%9==0)
        {
            if(i>pre){
                pre=i;
            }

        }
    }
    printf("the big number: %d",pre);
}