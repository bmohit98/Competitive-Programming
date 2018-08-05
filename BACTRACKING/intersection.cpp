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
list* intersection(list * &a,list * &b){
	list* curr=a;
	list* curr1=b;
	list* newnode=NULL;
	list* first;
	while(curr!=NULL){
		first=curr1;
		while(first!=NULL){
			if(curr->value==first->value){
				insert(curr->value,newnode);
				break;
			}
			first=first->next;	
		}
		curr=curr->next;
	}
	return newnode;
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
	list* newhead=intersection(a,b);
	showlist(newhead);
}

