#include<stdio.h>

void Binary_Search(int[],int,int);
void sort(int[],int);    //function to sort the array in increasing order

void main()
{
    int element,beg,mid,end,flag=0;

    printf("\tBinary Search Implementation\n");
    
    int size;
    
    printf("\nEnter the number of elements: ");
    scanf("%d",&size);
    
    int a[size];
    
    printf("\nEnter the elements:\n");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    sort(a,size);    //sorting the array; binary search works only on a sorted array
    
    printf("\nElements in array after sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    printf("\n Enter the element to be searched: ");
    scanf("%d",&element);
    
    Binary_Search(a,element,size);
}



void sort(int a[],int n)
{
    int temp;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void Binary_Search(int a[],int element,int n)
{
    int mid,flag=0,beg=0,end=n-1;
    
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
