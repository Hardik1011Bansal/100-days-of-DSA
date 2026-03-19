/*Problem: Circular Linked List Creation and Traversal - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the circular linked list elements starting from head, space-separated

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50

Explanation:
Last node's next points to head. Traverse from head until returning to head to avoid infinite loop.*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createlist(struct node* head, int n)
{
    struct node* tail=head;
    int x;
    for(int i=0;i<n;i++)
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
            printf("No memory allocated!");
            return head;
        }
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        if(i==n-1)
        {
            tail->next=head;
        }
   }
   return head;
}
void display(struct node* head)
{
    struct node* temp=head;
    if(temp==NULL)
    {
        printf("List is empty");
        return;
    }
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
}
int main()
{
    int n;
    scanf("%d",&n);
    struct node* head=NULL;
    head=createlist(head,n);
    display(head);
    return 0;

}