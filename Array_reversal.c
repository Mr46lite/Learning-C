#include<stdio.h>
#include<stdlib.h>

void reverse(int n){
 int*arr;
 arr=malloc(n*sizeof(n));
  for(int x=0; x<=(n-1);x++){
   scanf("%d",&arr[x]);
  }
  for(int i=n-1;i>=0;i--){
   printf("%d ",arr[i]);
  }
free(arr);
}
int main(){
int sum,n;
scanf("%d",&n);
reverse(n);
return 0;
}