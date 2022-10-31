#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node *create();
struct node
	{
     int data;
     struct node *left,*right;
 };
	struct node *root;
int main()
 {
     root=0;
	 root=create();

	 }
	 struct node *create()
	 {
		 int x;
		 struct node *newnode;
		 newnode=(struct node *)malloc(sizeof(struct node));
		 printf("enter the input to the node -1 to exit");
		 scanf("%d",&x);
		 if(x==-1)
		  return 0;
		  newnode->data=x;
		  printf("enter the left child for %d",x);
		  newnode->left=create();
		  printf("enter the righrt child for %d",x);
		  newnode->right=create();
		  return newnode;
		
		 }
