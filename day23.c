/*Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print the merged linked list elements, space-separated

Example:
Input:
5
10 20 30 40 50
4
15 25 35 45

Output:
10 15 20 25 30 35 40 45 50

Explanation:
Compare nodes of both lists, append smaller to result, continue until all nodes are merged.*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* create_list(int n,struct node* head)
{
    int x;
    struct node* temp =NULL;
    
    for(int i=0;i<n;i++)
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&x);
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}

int main()
{
    struct node* head1=NULL,*head2=NULL,*head3=NULL,*tail3=NULL;
    int n,m;
    scanf("%d",&n);
    head1=create_list(n,head1);
    scanf("%d",&m);
    head2=create_list(m,head2);
    struct node* temp1=head1,*temp2=head2;
   while(temp1!=NULL && temp2!=NULL)
   {
    if(temp1->data < temp2->data)
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp1->data;
        newnode->next=NULL;
        if(head3==NULL)
        {
            head3=newnode;
            tail3=newnode;
        }
        else{
            tail3->next=newnode;
            tail3=newnode;
        }
        temp1=temp1->next;
    }
    else
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp2->data;
        newnode->next=NULL;
        if(head3==NULL)
        {
            head3=newnode;
            tail3=newnode;
        }
        else{
            tail3->next=newnode;
            tail3=newnode;
        }
        temp2=temp2->next;
    }
   }
   if(temp1==NULL)
   {
    while(temp2!=NULL)
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp2->data;
        newnode->next=NULL;
        if(head3==NULL)
        {
            head3=newnode;
            tail3=newnode;
        }
        else{
            tail3->next=newnode;
            tail3=newnode;
        }
        temp2=temp2->next;
    }
   } 
   else{
    while(temp1!=NULL)
    {
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp1->data;
        newnode->next=NULL;
        if(head3==NULL)
        {
            head3=newnode;
            tail3=newnode;
        }
        else{
            tail3->next=newnode;
            tail3=newnode;
        }
        temp1=temp1->next;
    }
   }
   struct node* temp=head3;
   while(temp!=NULL)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
    return 0;
}