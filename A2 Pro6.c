#include<stdio.h>
int main(){

    int line,i,j,k,m;
    scanf("%d",&line);
    for(i=1;i<=line;i++){
        for(j=1;j<=line-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(m=1;m<i;m++){
            printf("*");
        }
        printf("\n");
    }
    for(i=line-1;i>=1;i--){
        for(j=1;j<=line-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        for(m=1;m<i;m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
