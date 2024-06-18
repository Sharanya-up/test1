#include<stdio.h>
int power(int x, int y)
{
if(y==0)
 return(1);
else if(y==1)
  return(x);

else
  return(x*power(x,y-1));

}

main(){
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("the %d to the power %d is %d ",a,b,power(a,b));
}
