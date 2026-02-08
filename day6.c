/*Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3*/
#include<stdio.h>

void removeElements(int arr[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    removeElements(arr,n);
    return 0;
    
}
void removeElements(int arr[],int n)
{
    int count=0,j=0;
    for(int i=1;i<n;i++)
    {
       
        if(arr[i]!=arr[j])
        {
            arr[++j]=arr[i];
        }
        else{
            count++;
        }
    }

    for(int i=0;i<n-count;i++)
    {
        printf("%d ",arr[i]);
    }
}