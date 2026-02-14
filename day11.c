/*Problem: Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.

Input:
- First line: two integers m and n representing the number of rows and columns
- Next m lines: n integers each representing the elements of the first matrix
- Next m lines: n integers each representing the elements of the second matrix

Output:
- Print the resultant matrix after addition, with each row on a new line and elements separated by spaces

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1

Output:
10 10 10
10 10 10
10 10 10

Explanation:
Each element of the result matrix is the sum of the corresponding elements from the two input matrices.*/
#include<stdio.h>
void matrix_addition(int m,int n,int arr1[m][n],int arr2[m][n]);
int main()
{
    int m,n;
    printf("enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int arr1[m][n],arr2[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter elements of first matrix:");
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the elements of second matrix:");
            scanf("%d",&arr2[i][j]);
        }
    }
         matrix_addition(m,n,arr1,arr2);

    return 0;
}
   
void matrix_addition(int m,int n,int arr1[m][n],int arr2[m][n])
{
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

}