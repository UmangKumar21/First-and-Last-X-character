#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char S[103];
    int X;
    scanf("%s\n%d",&S,&X);
    for(int i=0;i<X;i++){
        printf("%c",S[i]);
    }
    int Len=strlen(S);
    for(int j=Len-X;j<Len;j++){
        printf("%c",S[j]);
    }
}
