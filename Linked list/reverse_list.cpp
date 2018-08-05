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
	cout<<curr->value<<"->NULL";
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
	list *curr=head;
	list* prev=NULL,*next=NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;	
	}
	head=prev;
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
	reverse(head);
	showlist(head);
}

