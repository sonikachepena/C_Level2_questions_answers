#include<stdio.h>
int main(){
    int i=5;
    loop: if(i >0) {
        printf("%d\n",i);
        i--;
        goto loop;
    }
}


