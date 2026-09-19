#include <stdio.h>
#include <stdlib.h>
struct  node
{
   int data;
   struct node *next;
   struct node* prev;

};
void insertatfirst(struct node* head){
    struct node*ptr=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=122;
    new->next=head;
    head->prev=new;
    head=new;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertatlast(struct node* head){
    struct node*ptr=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    // new->prev=ptr;
    new->data=999;
    // new->next=NULL;
    // ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;
    new->prev=ptr;
    new->next=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
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
   head->data = 67;
   head->next = second;
   
   second->prev =head;
   second->data = 6;
   second->next = third;
   
   third->prev =second;
   third->data = 7;
   third->next = fourth;
   
   fourth->prev =third;
    fourth->data = 2;
   fourth->next = NULL;

//    insertatfirst(head);
    insertatlast(head);

   return 0;
}