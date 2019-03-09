#include<stdio.h>
struct node
{
	int data;
	struct node *link;
};
struct node *root;
void create_node()
{
	struct node *temp,*t;
	temp=(structf node*)malloc(sizeof(structnode));
	printf("enter the node");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		 root=temp;
	}
	else
	{
		t=root;
		while(t->link==NULL)
		{ 
		t=t->link;
		}
		t->link=temp;
	}
void insert_node_atbegin()
{
	struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		 root=temp;
	}
	else
	{
	   temp->link=root ;
	   root=temp;	
	}
	
}
void insert_node_atend()
{
	struct node *temp,*p;
	p=root;
    temp=(struct node*)malloc(sizeof(struct));
	printf("enter node");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		 root=temp;
	}
	else
	{
	   while(p->link!=NULL)
	   	p=p->link;
	   	p->link=temp;
	}
}
void insert_at_specifiedpos()
{
	struct node *temp,*p;
	int loc,i=1;
	printf("enter the pos you want to insert");
	scanf("%d",&loc);
	if(loc>length_of_list)
		printf("invalid position \n there is only %d nodes",len);
	else
	{
		p=root;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
	temp=(struct node*)malloc(sizeof(struct));
	printf("enter node");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	temp->link=p->link;
	p->link=temp;
	}
}
int length_of_list()
{
	struct node *temp;
	int count=0;
	temp=root;
	if(temp==NULL)
	 return printf("list is empty");
	else
	{
		while(temp!=NULL)
		{
			count++;
			temp=temp->link;
		}
		return count;
	}
}	
