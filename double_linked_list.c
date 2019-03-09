#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *leftlink;
	struct node *rightlink;
	
};
struct node *root=NULL;
void append();
void display();
int length();
void addAtBegin();
int len;
int main()
     {
	  while(1)
	    {
		int ch;
		printf("DOUBLY LINKED LIST OPERATION \n 1.APPEND NODE \n 2.ADD AT BEGIN \n 3.ADD AT SPECIFFIED LOCATION \n 4.LENGTH OF LIST \n 5.DELETE AT END \n 6.DISPLAY LIST ELEMENT \n 7.DELETE ELEMENT AT SPECIFIED LOCATION \n 8.EXIT \n");
        printf("\t\n\tEnter your choice\n");
	    scanf("%d",&ch);	
	      switch(ch)
	    {
	   	 case 1 :  append();
	   	          break;
	   	 case 2 :  addAtBegin();
	   	          break;
	   // case 3 :  add_at_specifiedloc();
	   	 //         break;
	   	 case 4 :  len=length();
	   	          printf("length of list : %d\n",len);
	   	          break;
	   	          	/* 
	     case 5 :  delete();
	   	          break;
	   	case 6 : traverse();
	   	          break;
	   	case 7 : delete_at_specifiedpos();
	   	          break;*/
	   	  case 6: display();
	   	           break;
	   	default : exit(0);
	   }
	}
	return 0;
}

void append()
{
	struct node *temp;
	printf("enter the node");
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->leftlink=NULL;
	temp->rightlink=NULL;
	if(root==NULL)
	 root=temp;
	else
	{
		struct node *p;
		p=root;
		while(p->rightlink!=NULL)
		{
			p=p->rightlink;
		}
		p->rightlink=temp;
		temp->leftlink=p;
		
	}
}
void addAtBegin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node");
	scanf("%d",&temp->data);
	temp->leftlink=NULL;
	temp->rightlink=NULL;
	if(root==NULL)
	  root=temp;
	else{
		temp->rightlink=root;
		root->leftlink=temp;
		root=temp;
	}
}

int length()
{
	int i=0;
	struct node *temp;
	temp=root;
	if(root==NULL)
	  return 0;
	else
	{
		while(temp->rightlink!=NULL)
		{
			temp=temp->rightlink;
			i++;
		}
		return i;
	}
}
void display()
{
	int i=0;
	struct node *temp=NULL;
	if(root==NULL)
	printf("LIST IS EMPTY");
	else
	{
		while(temp->rightlink!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->rightlink;
		}
	}
}

