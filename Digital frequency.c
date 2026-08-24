#include<stdio.h>
#include<stdlib.h>

int main(){
int i,count;
char sentence[1000];
char c;
scanf("%c",&c);
if(c!='\n'){
 sentence[0]=c;
 for(i=1;sentence[i-1]!='\n';i++){
  scanf("%c",&sentence[i]);
  if(sentence[i]=='\n'){
   break;
  }
}
for(int x=0;x<=9;x++){
 char compare='0'+x;
 count=0;
  for(int y=0;y<i;y++){
   if(compare==sentence[y]){
    count++;
  }
 }
 printf("%d ",count);
}
}
return 0;
}