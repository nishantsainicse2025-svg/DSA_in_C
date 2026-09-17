 #include <stdio.h>
 #include<stdlib.h>
 struct node{
   int data;
   struct node*next;
 };
 void circularLLinsertion(struct node* head){
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   struct node*p=head->next;
   ptr->data=222;
   while(p->next!=head){
      p=p->next;
   }
   p->next=ptr;
   ptr->next=head;
   head=ptr;
   struct node* temp=head;
   do{
      printf("%d ",temp->data);
      temp=temp->next;
   }while(temp!=head);
 }
 void lastnode(struct node* head){
   struct node*ptr=(struct node*)malloc(sizeof(struct node));
   struct node* p=head;
   ptr->data=45;
   while(p->next!=head){
      p=p->next;
   }
   p->next=ptr;
   ptr->next=head;
  
   do{
      printf("%d ",ptr->data);
      ptr=ptr->next;
   } while (ptr!=head);
   
 }
 int main() {
     struct node *head;
   struct node *second;
   struct node *third;
   struct node *fourth;
   
   struct node *two; // New pointer

   head = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));
   fourth = (struct node *)malloc(sizeof(struct node));
   

   // one->next=head;
   head->data = 67;
   head->next = second;

   second->data = 6;
   second->next = third;

   third->data = 7;
   third->next = fourth;

   fourth->data = 2;
   fourth->next = head;
circularLLinsertion(head);
lastnode(head);
    return 0;
 }