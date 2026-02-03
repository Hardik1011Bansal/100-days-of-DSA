/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.*/
#include<stdio.h>
int main()
{
    int n,key;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Found at index %d\nComparisons = %d",i,i+1);
            return 0;
        }
    }
    printf("key not found");
    
    return 0;
}
