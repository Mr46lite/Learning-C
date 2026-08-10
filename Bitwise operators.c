#include<stdio.h>
#include<stdlib.h>

void calculate_the_max(int a, int b){
int and_max=0,or_max=0,xor_max=0;
for(int x=1;x<=a;x++){
   for(int y=x+1;y<=a;y++){
    int and,or,xor;
    and=x&y;
    or=x|y;
    xor=x^y;
      if(and<b && and>and_max){
        and_max=and;
      }
      if(or<b && or>or_max){
        or_max=or;
      }
      if(xor<b && xor>xor_max){
        xor_max=xor;
      }
   }
}
printf("%d\n",and_max);
printf("%d\n",or_max);
printf("%d",xor_max);
}

int main()
{
int n,k;
scanf("%d %d",&n,&k);
 calculate_the_max(n,k);
    return 0;
}