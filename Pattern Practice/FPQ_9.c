/*
**
*
****
*
*
*
********
*
*
*
*
*
*/
#include<stdio.h>
void main()
{
    int i,j,k,m;
    for(i=1;i<=3;i++)
    {
        i==3?(m=2):(m=0);
        for(j=1;j<=2*i+m;j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=1;k<=2*i-1;k++)
            printf("*\n");
    }
}