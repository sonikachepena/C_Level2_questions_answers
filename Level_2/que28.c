#include <stdio.h>
int main()
{
    int n1,n2;
    printf("enter your two numbers:\n");
    scanf("%d %d",&n1,&n2);
    int max = (n1>n2?n1:n2);
    int lcm;
    for(lcm=max; ;lcm++){
        if(lcm%n1==0 && lcm%n2==0){
             break;

        }
       
    }
     printf("LCM of %d, %d= %d\n", n1, n2, lcm);

}