#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int k)
 {
 	struct node *temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->data=k;
 	temp->link=NULL;
 	if(rear==NULL && front==NULL)
 	{
 		front=temp;
		rear=temp;
		return;
	}
	 rear->link=temp;
	 rear=temp;
	 
 }
 
void dequeue()
{ 
   struct node *temp;
   temp=front;
	if(front==NULL)
	{
	  print("queue is empty\n");
          return;
      }
	else if(front==rear)
	   {
	   	front=NULL;
	   	rear=NULL;
	   }
	else
	{
	  front=front->link;	
	}
	free(temp);
}
void print()
{
struct node *temp=front;
while(temp!=NULL)
{
  printf("%d --> ",temp->data);
  temp=temp->link;
}
printf("\n");
}
void length()
{
	struct node *t=front;
	if(front==NULL)
	  print("\nNULL\n");
	else if(front==rear)
	  printf("\nlength=1\n");
	else
	{
		int e=0;
		while(t!=NULL)
		{   
			t=t->link;
			e++;
		}
		printf("\nlenth =%d \n",e);
	}
}
int main()
{

	enqueue(1);
	print();
	length();
   	enqueue(12);

	enqueue(13);
	enqueue(14);

	enqueue(6);
	dequeue();
	print();
    length();
    enqueue(1);
   	enqueue(12);

	enqueue(13);
	enqueue(14);

	enqueue(6);
	dequeue();
	print();
    length();
}
