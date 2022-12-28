#include"fact header.h"
int main()
{
int n,i,fact=1;
printf("enter an integer:");
scanf("%d",&n);

if(n<0)
printf("error!factorial of a negative number doesn't exists.");

else
{
for(i=1;i<=n;++i)
{
fact*=i;
}
printf("factorial of %d=%d",n,fact);
}
return 0;
}