#include<stdio.h>

#define size 10 //size of array is initialized to 10

int sort(int[]);    //function to sort the array in increasing order

void main()
{
    int a[size],element,beg,mid,end,flag=0;

    printf("\tBinary Search Implementation\n");
    
    printf("\nEnter the elements:\n");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    sort(a);    //sorting the array; binary search works only on a sorted array
    
    printf("\nElements in array after sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    printf("\n Enter the element to be searched: ");
    scanf("%d",&element);
    
    beg=0;
    end=size-1;
    
    while(beg<=end)
    {
        mid=(beg+end)/2;

        if(a[mid]==element)
        {
            printf("\n   --> Searched element %d found at position %d",element,mid+1);
            flag=1;
            break;
        }

        else if(element>a[mid])
            beg=mid+1;

        else 
            end=mid-1;

   }

    if(flag==0)
        printf("\n   --> Searched element not found");

}



int sort(int a[])
{
    int temp;
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    return(a[size]);
}
