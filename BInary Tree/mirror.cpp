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
void mirror(node *& root1,node *&root){
	if (root==NULL) {
		root1=NULL;
    	return;
    }
	else{
		root1=creat(root->value);
		mirror(root1->right,root->left);
		mirror(root1->left,root->right);
	}
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
int main(){
	int n,m;
	cin>>n;
	char arr[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];
	}
	node *root=insertion(arr,root,0,n+1);
	node *root1;
	mirror(root1,root);
	int height=treeheight(root);
	for(int i=1;i<=height;i++){
		levelorderprint(root,i);
	}
	cout<<"\n";
	for(int i=1;i<=height;i++){
		levelorderprint(root1,i);
	}
}

