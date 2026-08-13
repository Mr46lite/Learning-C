#include<stdio.h>

int small_of_4(int a,int b,int c,int d){
int smallest=a;
 if(smallest>=b){
  smallest=b;
 }
 if(smallest>=c){
  smallest=c;
 }
 if(smallest>=d){
  smallest=d;
  
 }
 return smallest;
}

void pattern(int n){
int x,y;
int number;
int top,left,bottom,right,small;
int limit=2*n-1;
for (x=1;x<=limit;x++){
 for (y=1;y<=limit;y++){
 top=x-1;
 bottom=limit-x;
 left=y-1;
 right=limit-y;
 small=small_of_4(top,bottom,left,right);
 number=n-small;
  printf("%d",number);
  if(y==limit){
 printf("\n");
 }}}}
int main()
{
int num;
scanf("%d",&num);
pattern(num);
return 0;
}