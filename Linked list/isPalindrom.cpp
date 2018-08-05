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
list* middle(list *&head){
	list *p1=head,*p2=head;
	if(head==NULL)
		return 0;
	while(p2->next!=NULL&&p2->next->next!=NULL){
		p1=p1->next;
		p2=p2->next->next;
	}
	return p1;
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
bool isPalindrom(list*&head){
	list *ptr=middle(head)->next;
	reverse(ptr);
	int flag=1;
	while(ptr!=NULL){
		if(ptr->value!=head->value){
			return false;
		}
		ptr=ptr->next;
		head=head->next;
	}
	return true;
}
int main(){
	int n,m,x,y;
	list *a=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		insert(x,a);
	}
	cout<<isPalindrom(a);	
}


