#include<stdio.h>
int main()
{
    int col,row,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col==1 || row==5 || row==col){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
