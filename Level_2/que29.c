#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter your three numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int max = (n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));
    int lcm;
    for(lcm=max; ;lcm++){
        if(lcm%n1==0 && lcm%n2==0 && lcm%n3==0){
             break;

        }
       
    }
     printf("LCM of %d, %d, and %d = %d\n", n1, n2, n3, lcm);

}