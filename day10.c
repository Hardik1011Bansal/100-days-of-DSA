/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    for(int i =0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            printf("No");
            return 0;
        }
    }
    printf("yes");
    return 0;
}