#include<stdio.h>
#include<stdlib.h>

struct node
{ 
  int data;
  struct node* next;
 
};

void insert_end(struct node **head,int new_data)
{
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  struct node *last=*head;
  new_node->data=new_data;
  new_node->next=NULL;
  if(*head==NULL)
   {
     *head=new_node;
     return;
   }
  while(last->next !=NULL)
  
    last=last->next;
    last->next=new_node;
    return;
   
}

void insert_begin(struct node **head,int new_data)
{
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=new_data;
  new_node->next=*head;
  *head=new_node;
}

void insert_after(struct node **head,int new_data,int pos)
{
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  struct node* prev=(struct node*)malloc(sizeof(struct node));
  new_node->data=new_data;
  prev=*head;
  while(--pos)
   {
     prev=prev->next;
   }
   new_node->next=prev->next;
   prev->next=new_node;

}

void delete_number(struct  node **head,int new_data)
{

  struct node* temp=(struct node*)malloc(sizeof(struct node));
  struct node* prev=(struct node*)malloc(sizeof(struct node));
  temp=*head;
  prev=*head;
  while(temp->data!=new_data)
   {
     prev=temp;
     temp=temp->next;
   }
  prev->next=temp->next;
  temp->next=NULL;
}

void printList(struct node* n)
{
  while(n!=NULL)
   {
     printf("%d",n->data);
     n=n->next;
   }
  printf("\n");

}

void print_rec(struct node *n)
{
  if(n==NULL)
  return;
  else
   {
     printf("%d",n->data);
     n=n->next;
     print_rec(n);
   }
  return;
}

void main()
{
  //struct node *head=NULL;
  int n,pos,ch;

  struct node* head=NULL;
  struct node* second=NULL;
  struct node* third=NULL;

  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
 
  head->data=1;
  head->next=second;
  second->data=2;
  second->next=third;
  third->data=3;
  third->next=NULL;

  //printList(head);

  while(1) 
  {
    printf("1.enter at end \n 2.insert at beginning\n 3.insert after position\n   5.delete a num\n 6.exit\n7.recursion \nenter ur choice");
   scanf("%d",&ch);
   
   switch(ch)
   {
	case 1:printf("enter the num to insert");
	scanf("%d",&n);
	insert_end(&head,n);
	printList (head);
	break;
	case 2:
	printf("enter the num to insert at begin");
	scanf("%d",&n);
	insert_begin(&head,n);
	printList (head);
	break;
	case 3:
	printf("enter the num & position to insert after");
	scanf("%d %d",&n,&pos);
	insert_after(&head,n,pos);
	printList (head);
	break;


	case 5:
	printf("enter a num in the list to delete");
	scanf("%d",&n);
	delete_number(&head,n);
	printList (head);
	break;
 
	case 6:
	exit(1);

	case 7:
	printf("output in recursion");
	print_rec(head);
	printf("\n");
	printList(head);
	break;
    }
 }
}
		

