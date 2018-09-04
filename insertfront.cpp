#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void print(struct node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
struct node* insertfront(struct node* head,int data){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node *temp=head;
	newnode->data=data;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
		return head;
	}
	newnode->next=head;
	return newnode;
}
int main(){
	struct node *head=NULL;
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		head=insertfront(head,x);
	}print(head);
	return 0;
}
