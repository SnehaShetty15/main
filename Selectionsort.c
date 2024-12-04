#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p,n,type)\
p=(type *)malloc(n*sizeof(type));\
if(p==NULL){\
printf("Insufficient Memory\n");\
exit(0);\
}

void SelectionSort(int arr[],int n)
{
    int i,j,pos,temp;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[pos])
                pos=j;
        }        
        if(i!=pos)
        {
            temp=arr[i];
            arr[i]=arr[pos];    
            arr[pos]=temp;
        }
    }
}

int main()
{
    int *array,i,n;
    printf("no of elements: ");
    scanf("%d",&n);
    MALLOC(array,n,int);
    printf("\nEnter %d of elements: ",n);
    
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    SelectionSort(array,n);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d\t",array[i]);
    free(array);    
    return 0;    
}