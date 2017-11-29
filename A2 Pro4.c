#include<stdio.h>
int main(){

    int line,i,j,k;
    scanf("%d",&line);
    for(i=1;i<=line;i++){
        for(j=1;j<=line-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

