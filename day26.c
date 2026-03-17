/*Problem: Doubly Linked List Insertion and Traversal - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the linked list elements in forward order, space-separated

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50

Explanation:
Each node has data, next, prev. Insert nodes sequentially, traverse from head using next pointer.*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* createlist(int n, struct node* head);
void display(struct node* head);
int main()
{
    int n;
    scanf("%d",&n);
    struct node* head=NULL;
    head=createlist(n,head);
    display(head);
    return 0;
}
struct node* createlist(int n,struct node* head)
{
    int x;
    struct node* tail=head;
    for(int i=0;i<n;i++)
    {
    scanf("%d",&x);
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=tail->next;
    }
  }
  return head;
}

void display(struct node* head)
    {
        struct node* temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    
