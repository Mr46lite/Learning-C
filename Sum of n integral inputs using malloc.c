#include<stdio.h>
#include<stdlib.h>

int total(int n){
 int*arr;
 arr=malloc(n*sizeof(n));
 int sum=0;
 
  for(int x=0; x<=(n-1);x++){
   scanf("%d",&arr[x]);
  }
  for(int y=0; y<=(n-1);y++){
  sum+=arr[y];
  }
return sum;
free(arr);
}
int main(){
int sum,n;
scanf("%d",&n);
sum = total(n);
printf("%d",sum);
return 0;
}