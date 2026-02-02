/*Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.*/
#include<stdio.h>
void delete_element(int n,int arr[],int k)
{
    int updated_array[n-1];
    for(int i=0;i<k-1;i++)
    {
        updated_array[i]=arr[i];
    }
    for(int i=k-1;i<n-1;i++)
    {
        updated_array[i]=arr[i+1];
    }
    for (int i=0;i<n-1;i++)
    {
        printf("%d ",updated_array[i]);
    }
}
int main()
{
    int n,pos;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element which is to be deleted:");
    scanf("%d",&pos);
    delete_element(n,arr,pos);
    
    return 0;
}


