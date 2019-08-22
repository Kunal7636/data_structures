#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void prin(struct node* node4)
{
 while(node4!=NULL){
                printf("%d ",node4->data);
                node4=node4->next;
        }

}
int main(void){
   	struct node* node1=NULL;
  	struct node* node2=NULL;
   	struct node* node3=NULL;
	struct node* node4=NULL;
  	node1 = (struct node*)malloc(sizeof(struct node));
	node2 = (struct node*)malloc(sizeof(struct node));
	node3 = (struct node*)malloc(sizeof(struct node));
        node4 = (struct node*)malloc(sizeof(struct node));
	node1->data=1;
	node1->next=node2;
	node2->data=2;
	node2->next=node3;
	node3->data=3;
	node3->next=NULL;
        int nu;
	scanf("%d",&nu);
	node4->data=nu;
	node4->next=node1;
        prin(node4);
	
	return  0;

 
}

