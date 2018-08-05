#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
struct list{
	int value ;
	struct list *next;
};
//typedef struct list list;

list* creatnode(int val){
	list *temp=new list;
	temp->value=val;
	temp->next=NULL;
	return temp;
}
void insert(int value,list * &head){
	
	if(head==NULL){
		head=creatnode(value);
	}
	else{	
	list *temp=creatnode(value);
	temp->next=head;
	head=temp;
	}
	
}
void showlist(list* &head){
	list* curr=head;
	while(curr->next!=NULL){
		cout<<curr->value<<" ->";
		curr=curr->next;
	}	
	cout<<curr->value<<"->NULL"<<"\n";
}
void del(list *&head){
	list *curr=head,*prev=head;
	while(curr->next!=NULL){
		prev=curr;
		curr=curr->next;
	}
	prev->next=NULL;
	free(curr);
}
void reverse(list *&head){
	list *first;
	list* rest;
	if(head==NULL)
		return;
	first=head;
	rest=first->next;
	if(rest==NULL)
		return;
	reverse(rest);
	first->next->next=first;
	first->next=NULL;
	head=rest;
}
int middle(list *&head){
	list *p1=head,*p2=head;
	if(head==NULL)
		return 0;
	while(p2->next!=NULL&&p2->next->next!=NULL){
		p1=p1->next;
		p2=p2->next->next;
	}
	return p1->value;
}
int main(){
	int n,a;
	list *head=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		insert(a,head);
	}
	
	showlist(head);
//	reverse(head);
//	showlist(head);
	cout<<middle(head);
}

