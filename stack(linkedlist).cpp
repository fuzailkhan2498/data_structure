#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *top=NULL,*root=NULL;
void push(int k)
 {
 	struct node *temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->data=k;
 	temp->link=NULL;
 	if(top==NULL && root==NULL)
 	{
 		
		top=temp;
		root=temp;
		return;
	}
	 top->link=temp;
	 top=temp;
	 
 }
 
void pop()
{ 
   struct node *temp,*t;
   temp=root;
	if(top==NULL)
	{
	  printf("stack is empty\n");
          return;
      }
	else
	{
	while(temp->link!=NULL )
		{  
		    t=temp;
			temp=temp->link;
	   }
	   t->link=NULL;	
	}
	free(temp);
}
void print()
{
struct node *temp=root;
while(temp!=NULL)
{
  printf("%d --> ",temp->data);
  temp=temp->link;
}
printf("\n");
}
void length()
{
	struct node *t=root;
	if(top==NULL)
	  printf("\nNULL\n");
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
push(1);
push(2);
print();
push(3);
push(4);
push(5);
push(6);
print();

pop();

pop();

pop();

pop();
print();
}
