/*Problem: Create and Traverse Singly Linked List

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the result

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL,*tail=NULL,*newnode=NULL;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
      newnode=(struct node*) malloc(sizeof(struct node));
      scanf("%d",&x);
      newnode->data=x;
      if(head==NULL)
      {
        head=newnode;
        tail=newnode;
      }  
      else{
        tail->next=newnode;
        tail=newnode;
      }
    }
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}