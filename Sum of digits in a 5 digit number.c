#include<stdio.h>
int main(){
int n,sum=0,d,oldn;
printf("enter number:");
scanf("%d",&n);
oldn=n;
while(n>0){
d=n%10;
sum+=d;
n=n/10;
}
printf("sum of all digits in %d = %d\n",oldn,sum);
return 0;
}
