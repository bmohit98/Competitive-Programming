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
list* merge(list * &a,list * &b){
	list* curr=a;
	list* curr1=b;
	list* newhead=NULL;
	while(curr!=NULL&&curr1!=NULL){
		if(curr->value>curr1->value){
			insert(curr->value,newhead);
			curr=curr->next;	
		}
		else if(curr->value<curr1->value){
				insert(curr1->value,newhead);
			curr1=curr1->next;	
		}
		else{
				insert(curr->value,newhead);
			curr=curr->next;
			curr1=curr1->next;	
		}	
	}
	while(curr!=NULL){
			insert(curr->value,newhead);
		curr=curr->next;
	}
	while(curr1!=NULL){
		insert(curr->value,newhead);
		curr1=curr1->next;
	}
	return newhead;
}
int main(){
	int n,m,x,y;
	list *a=NULL;
	list *b=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		insert(x,a);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>y;
		insert(y,b);
	}
	list* newhead=merge(a,b);
	showlist(newhead);
	
}

