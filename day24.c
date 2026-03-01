/*Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer key

Output:
- Print the linked list elements after deletion, space-separated

Example:
Input:
5
10 20 30 40 50
30

Output:
10 20 40 50

Explanation:
Traverse list, find first node with key, remove it by adjusting previous node's next pointer.*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* get_element(int x)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("No memory allocated");
        return NULL;
    }
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}
struct node* delete_node(struct node* head ,int key )
{
    if(head==NULL)
    {
        printf("List is empty");
        return NULL;
    }
    struct node* temp=head,*prev=NULL;
    if(temp->data==key)// bcoz we have checked that head !=null and temp = null so temp and head at this moment refers to first element 
    {

        head=head->next;
        free(temp);
        return head;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if( temp == NULL)
    {
        return head; // the case if key doesnot exist 
    }
    prev->next=temp->next;
    free(temp);
    return head;
}
int main()

{
    struct node* head=NULL, *tail=NULL, *newnode=NULL;
    int n,key;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        newnode=get_element(x);
        if(newnode==NULL)
        {
            break;  // if newnode==null that means no memory allocated so break becoz no more memory 
        }
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    scanf("%d",&key);
    head=delete_node(head,key);
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;

}