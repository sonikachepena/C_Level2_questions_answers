#include<stdio.h>
int main(){
    int i=1;
    loop: if(i < 6) {
        printf("%d\n",i);
        i++;
        goto loop;
    }
}


