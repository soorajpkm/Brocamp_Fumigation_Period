/*
*
****
*
*
********
*
**********
*/
#include<stdio.h>
void main()
{
    int i,j,k,l,m;
    for(i=1;i<=4;i++)
    {
        i%2!=0?(m=1):(m=2);
        for(j=1;j<=m;j++)
        {
            printf("*\n");
        }
        i==3?(l=2):(l=0);
        if(i<4)
        {
            for(k=1;k<=4*i-l;k++)
                printf("*");
            printf("\n");
        }
    }
}