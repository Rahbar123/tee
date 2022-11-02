#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node *create();
 struct node{
	 int data;
	 struct node *left,*right;
	 };
 
	  
	 struct node*create() {
		 int x;
		 struct node *newnode;
		 newnode=(struct node *)malloc(sizeof(struct node));
		
		 scanf("%d",&x);
		 if(x==-1){
	      return 0; 
	              }
	    newnode->data=x;
	    printf("enter left child for %d ",x);
	    newnode->left=create();
	    printf("enter right children for %d ",x);
	    newnode->right=create(); 
		return newnode;
		
		 }
		 
	void preorder(struct node *root){
		
		if(root==0)
		return ;
		else{
			 printf("%d ",root->data);
			preorder(root->left);
			preorder(root->right);
			}
		 
		}
		
 void inorder( struct node*root){
	 
	 if(root==0)
	 return;
	  inorder(root->left);
	  printf("%d ",root->data);
	  inorder(root->right);
	 }	
	 
	 void postorder(struct node *root){
		 
		 if(root==0)
		 return ;
		 postorder(root->left);
		 postorder(root->right);
		 printf("%d ",root->data);
		 }		 
	 
	 int main(){
	 struct node *root=0;
	 int x;
	printf(" preorder 1,\n inorder 2\n,postorder 3\n");
	
		scanf("%d",&x);
		 printf("enter root node/-1 ");
		root=create();
		switch(x)
		{

			 case 1:preorder(root);
			 break;
			 case 2:inorder(root);
			 break;
			 case 3:postorder(root);
			 break;
			 default:printf("invalid number");
			 break;      
			
			}
		
		
	 return 0;
	 
	 }
