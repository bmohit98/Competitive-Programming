#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	char value;
	struct node *left,*right;
};
class stack{
	int top, size;
	char *space;
	public:
		stack(int n){
			top=-1;size=n;
			space=(char *)malloc(sizeof(char)*size);
		}
		int push(char value){
			if(top==size-1){
				return -1;
			}
			top++;
			space[top]=value;
			return 1;
		}
		void display(){
			int i;
			for(i=0;i<=top;i++){
				cout<<space[i]<<" ";
			}
		}
		int pop();
	};
	int stack:: pop(){
				if(top==-1)
			 		return -1;
			 	int x=space[top];
			 	top--;
			 	return x;
			}

node *creat(char key){
	node *temp=new node;
	temp->value=key;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insertion(char *arr,node *& root,int i,int n){
	if(i<n){
		node* temp = creat(arr[i]);
        root = temp;
		root->left=insertion(arr,root->left,2*i+1,n);
		root->right=insertion(arr,root->right,2*i+2,n);
	}
	return root;
}
int treeheight(node *root){
	if(root==NULL){
		return 0;
	}
	return max(treeheight(root->left),treeheight(root->right))+1;
}

void levelorderprint(node* root,int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->value<<" ";
		return;
	}
	levelorderprint(root->left,level-1);
	levelorderprint(root->right,level-1);
}
void allpath(node *root,stack s1){
	if(root==NULL){
		return;
	}
	else if(root->left==NULL&&root->right==NULL){
		s1.push(root->value);
		s1.display();
		s1.pop();
		cout<<"\n";
		return;
	} 
	else{
		s1.push(root->value);
		allpath(root->left,s1);
		allpath(root->right,s1);
	}
}
int main(){
	int n,m;
	cin>>n;
	stack s1(n);
	char arr[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];
	}
	node *root=insertion(arr,root,0,n+1);
	int height=treeheight(root);
	for(int i=1;i<=height;i++){
		levelorderprint(root,i);
	}
	cout<<"\n";
	allpath(root,s1);
}

