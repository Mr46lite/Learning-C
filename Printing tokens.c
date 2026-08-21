#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int i=0;
    char c;
    char sentence[1000];
    scanf("%c",&c);
    if(c!='\n'){
    sentence[0]=c;
    for(i=1; c!='\n'; i++) {
        scanf("%c",&c);
        if(c=='\n') {
            n=i;
            break;
        }
        else {
            sentence[i]=c;
        }
    }
    for(i=0; i<n; i++) {
        if (sentence[i]!=' ') {
            printf("%c",sentence[i]);
        }
        else{
            printf("\n");
        }
    }}
    return 0;
}