#include<stdio.h>
int main()
{
    int col,row,n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(col==n|| row==n|| (col==4 && row==2) || (col==3 && row==3) || (col==2 && row==4)){
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


