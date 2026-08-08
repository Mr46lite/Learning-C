#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,fst_dgt,secnd_dgt,thrd_dgt,foth_dgt,fifth_dgt,result;
scanf("%d",&n);
fst_dgt=n%10;
secnd_dgt=(n%100-n%10)/10;
thrd_dgt=(n%1000-n%100)/100;
foth_dgt=(n%10000-n%1000)/1000;
fifth_dgt=(n%100000-n%10000)/10000;
result=fst_dgt+secnd_dgt+thrd_dgt+foth_dgt+fifth_dgt;
printf("%d",result);
    return 0;
}