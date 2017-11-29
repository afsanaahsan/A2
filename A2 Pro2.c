#include<stdio.h>
int main(){

    int line,star,i,j;
    scanf("%d %d",&line,&star);
    for(i=1;i<=line;i++){
        for(j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
