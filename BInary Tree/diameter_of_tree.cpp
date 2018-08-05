#include<iostream>
using namespace std;
struct node{
	int value;
	struct node *left,*right;
};
node *creat(int key){
	node *temp=new node;
	temp->value=key;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insertion(int *arr,node *& root,int i,int n){
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
int deimeter(node *root){
	if(root==NULL)
		return 0;
	int leftheight=treeheight(root->left);
	int rightheight=treeheight(root->right);
	int leftdeimeter=deimeter(root->left);
	int rightdeimeter=deimeter(root->right);
	return  max(leftheight + rightheight-1, max(leftdeimeter, rightdeimeter));
}
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];]
	}
	node *root=insertion(arr,root,0,n+1);
	int height=treeheight(root);
	for(int i=1;i<=height;i++){
		levelorderprint(root,i);
	}
	cout<<deimeter(root);
}

