#include<stdio.h>
int main()
{
    int i,j,k,line,star;
    scanf("%d %d",&line,&star);
    for (i=1; i<=line; i++)
    {
        for (j=1; j<=star; j++)
        {
            if(j==star || j==1 || i==1 || i==line)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
