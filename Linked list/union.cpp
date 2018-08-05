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
	list *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	temp->next=NULL;
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
list* unionn(list * &a,list * &b){
	list* curr=a,*last=a;
	list* curr1=b;
	while(last->next!=NULL){
		last=last->next;
	}
	while(curr!=NULL){
		if(curr->value==curr1->value){
			curr1=curr1->next;
			curr=curr->next;	
		}
		else{
			curr=curr->next;
		}	
	}
	while(curr1!=NULL){
		last->next=curr1;
		last=curr1;
		curr1=curr1->next;
	}
	return a;	
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
	list* newhead=unionn(a,b);
	showlist(newhead);
	
}

