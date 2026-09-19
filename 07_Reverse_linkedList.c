 #include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void reverse(struct node *head)
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
void deletelast(struct node *head){
    struct node *ptr = head;
    struct node*temp=head->next;
    while (temp->next!= NULL)
    {
        ptr=ptr->next;
        temp = temp->next;
        
    }
    free(temp);
    ptr->next=NULL;
    ptr=head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
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