/*   
        * 
      * * *
    *   *   *
  *     *     *
* * * * * * * * *
  *     *     *
    *   *   *
      * * *
        *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==5 || j==5)
                printf("* ");
            else if(i+j==6 || i-j==4 || j-i==4 || i+j==14)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}