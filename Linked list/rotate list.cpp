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
	list * dumy=head;
	while(dumy->next!=NULL){
		dumy=dumy->next;
	}
	dumy->next=temp;
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


void rotate(list *&head,int k,int size){
	list *curr=head,*last;
	list* prev=head;
	int remain=(abs(size-k))%size;
	if(k==0||remain==0){
		return;
	}
	while(remain!=0&&curr->next!=NULL){
		last=curr;
		curr=curr->next;
		remain--;
		
	}
	head=curr;
	last->next=NULL;
	while(curr->next!=NULL)
		curr=curr->next;
	curr->next=prev;
	curr=prev;
}

int main(){
	int n,k,x;
	list *a=NULL;
	cin>>n;
	cout<<"rotate list";
	cin>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		insert(x,a);
	}
	rotate(a,k,n);	
	showlist(a);
}


