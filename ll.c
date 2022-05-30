#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

int main(){
	struct node *head = malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;


	struct node *current = malloc(sizeof(struct node));
	current->data=111;
	current->link=NULL;
	head->link=current; //pointing address of next node

	current = malloc(sizeof(struct node));
	current->data=6;
	current->link=NULL;
	head->link->link=current;
	
	int cnt=0;
	if(head == NULL){
		printf("\nEmpty list");
	}
	struct node *ptr;
	ptr=head;
	/*
	while(ptr!=NULL){
		cnt++;
		printf("\n%d",ptr->data);
		ptr = ptr->link;
	}
	*/
	int d = 5884;

	struct node *ad = malloc(sizeof(struct node));
	ad->data=d;
	ad->link=NULL;

	ad->link=head;
	head=ad;


	while(ad!=NULL){
		cnt++;
		printf("\n%d",ad->data);
		ad = ad->link;
	}
	printf("\n%d\n", cnt);

	return 0;
}
	/*
	struct node *nc = malloc(sizeof(struct node));

	cn->data=5;
	cn->link=NULL;

	current->link=nc;
	*/
	//head->link give address of first pointer
