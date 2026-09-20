 #include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void doubleLLreverse(struct node *head)
{
    struct node *ptr = head;
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
     while (temp != NULL)
    {
      printf("%d ",temp->data);
        temp = temp->prev;
    }
    
}
void singleLLreverse(struct node *head)
{
    struct node*prev=NULL;
    struct node*current=head;
    struct node*next=NULL;
     while (current!= NULL)
   {
    // SETUP THE LINK AMONG NODES
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    
   }
   // prev consists head pointer 
   head=prev;
   while(prev!=NULL){
    printf("%d ",prev->data);
    prev=prev->next;
   }
}
int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    struct node *two; // New pointer

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //    two = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 14;
    head->next = second;

    second->prev = head;
    second->data = 1;
    second->next = third;

    third->prev = second;
    third->data = 7;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 2;
    fourth->next = NULL;

    // deletefirst(head);
    reverse(head);

    return 0;
}