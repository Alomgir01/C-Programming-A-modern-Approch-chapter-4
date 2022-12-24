#include<stdio.h>
int main (void)
{
 int d,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,sum1,sum2,total;

       printf("Enter the first (single) digit: ");
       scanf("%1d",&d);
       printf("Enter the first group of 5 digit: ");
       scanf("%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5);
       printf("Enter the second 5 digit: ");
       scanf("%1d%1d%1d%1d%1d",&b1,&b2,&b3,&b4,&b5);
       sum1= d+a2+a4+b1+b3+b5;
       sum2=a1+a3+a5+b2+b4;
       total=(3*sum1)+sum2;
       printf("check digit: %d",9-((total-1)%10));


}
