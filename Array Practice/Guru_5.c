//Reversing the elements in an array
#include<stdio.h>
void main()
{
    int size,i,temp,len;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    len=size-1;
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[len];
        arr[len]=temp;
        len--;
    }
    printf("Reversed array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}