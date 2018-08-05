#include<iostream>
using namespace std;
struct node{
	char value;
	struct node *left,*right;
};
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
int identical(node* root,node* root1){
	if(root1==NULL&&root1==NULL)
		return 1;
	if(root!=NULL&&root1!=NULL){
		if(root->value==root1->value)
			return identical(root->left,root1->left)&&identical(root->right,root1->right);
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n;
	char arr[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];
	}
	cout<<"tree 2";
	cin>>m;
	char arr1[m+1];
	for(int i=0;i<m+1;i++){
		cin>>arr1[i];
	}
	node *root=insertion(arr,root,0,n+1);
	node *root1=insertion(arr1,root1,0,m+1);
	int height=treeheight(root);
	int height2=treeheight(root1);
	cout<<"\n";
	if(height!=height2){
		cout<<"not identical";
		return 0;
	}
	cout<<identical(root,root1);
}

