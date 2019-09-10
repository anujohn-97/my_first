#include<stdio.h>
#include<stdlib.h>

struct node
{ 
  int data;
  struct node* next;
 
};

void printList(struct node* n)
{
  while(n!=NULL)
   {
     printf("%d",n->data);
     n=n->next;
   }
}

int main()
{
  struct node* head=NULL;
  struct node* second=NULL;
  struct node* third=NULL;
  struct node* tmp=NULL;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  tmp=(struct node*)malloc(sizeof(struct node));
  
  head->data=1;
  head->next=second;
  second->data=2;
  second->next=third;
  third->data=3;
  third->next=NULL;
 
  tmp->data=5;
  tmp->next=head;
  head=tmp;

  printList(head);

  return 0;
}
