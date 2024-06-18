#include<stdio.h>
 void hanoi(int n,char src,char dest,char spr)
 {
 if(n==1)
 printf("\nMove from %c to %c",src,dest);

 else{
  hanoi(n-1,src,spr,dest);
  hanoi(1,src,dest,spr);
  hanoi(n-1,spr,dest,src);

 }
 }

main(){
int n;
printf("enter the no of rings:");
scanf("%d",&n);
hanoi(n,'A','B','C');


}
