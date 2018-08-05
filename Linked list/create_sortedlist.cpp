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
		list *curr=head,*pre=NULL;
		while(curr!=NULL){
			if(curr->value<value){
				pre=curr;
				curr=curr->next;
			}
			else{
				if(curr==head){
					temp->next=curr;
					head=temp;
					break;
				}
				else{
					temp->next=curr;
					pre->next=temp;
					break;
				}
			}
		}
		if(curr==NULL){
			pre->next=temp;
			temp->next=NULL;
		}
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
bool checksorted(list * &head){
	list* curr=head;
	list* next=head->next;
	if(next==NULL){
		return true;
	}
	while(next->next!=NULL){
		if(curr->value>next->value){
			curr=next;
			next=next->next;	
		}
		else
			return false;	
	}
	return true;
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
	
}

