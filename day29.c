/*Problem: Rotate Linked List Right by k Places - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer k

Output:
- Print the linked list elements after rotation, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
40 50 10 20 30

Explanation:
Connect last node to head forming circular list. Traverse to (n-k)th node, set next to NULL, update head to (n-k+1)th node.*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createlist(struct node* head,int n)
{
    int x;
    struct node* tail=head;
    for(int i=0;i<n;i++)
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory not allocated!");
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
struct node* rotate(struct node* head, int n, int k)
{
    struct node* temp=head;
    if(temp==NULL)
    {
        printf("Empty list");
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    if(k>n)
    {
        k=k%n;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;  // to link last and first node
    temp=head;   // again reset temp so that we can set new head and tail 
    for(int i=0;i<n-k-1;i++) // initializing should be 0 and condition should be to get to n-k-1 pos . if initialzation is 0 and condition is n then we get to (n+1)th node  
    {
        temp=temp->next;
    }
    head=temp->next; // head is the (n-k+1)th node
    temp->next=NULL;  // last node is (n-k)
    return head;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    struct node* head=NULL;
    head=createlist(head,n);
    scanf("%d",&k);
    if(k!=0)
    {
    head=rotate(head,n,k);  // because if k==0 then no changes in the linked list 
    }
    display(head);
    return 0;
}

