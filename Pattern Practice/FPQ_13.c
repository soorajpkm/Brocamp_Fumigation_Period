/*
*
*
***
**
**
******
***
***
*********
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("*");
            //if(j==i || j==2*i)
            if(j%i==0)
                printf("\n");
        }
        for(k=1;k<=3*i;k++)
            printf("*");
        printf("\n");
    }
}