/*Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/
#include<stdio.h>

void insert_element(int n,int k,int m,int arr[])
{
   
int updated_array[n+1];
   
for(int i=0;i<k-1;i++)
{
    updated_array[i]=arr[i];
}
updated_array[k-1]=m;
for(int i=k;i<n+1;i++)
{
    updated_array[i]=arr[i-1];
}
for(int i=0;i<n+1;i++)
{
    printf("%d ",updated_array[i]);
}

}

int main()
{
    int n,k,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
scanf("%d",&k);
scanf("%d",&m);
insert_element(n,k,m,arr);


    return 0;
}
