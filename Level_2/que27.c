#include<stdio.h>
int sum_of_digit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int i;
    int count=0;
    for(i=0;i<100000;i++){
        if(sum_of_digit(i)==14){
            count++;
        }
    }
    printf("the count %d",count);
    
}