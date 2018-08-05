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
void preorder(node *& root)
{
    if (root != NULL)
    {
    	cout << root->value <<" ";
        preorder(root->left);
        
        preorder(root->right);
    }
}
void inorder(node *& root)
{
    if (root != NULL)
    {
    	
        inorder(root->left);
        cout << root->value <<" ";
        inorder(root->right);
    }
}
void postorder(node *& root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->value <<" ";
    }
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
void spirallevelorder(node *root,int level,int count){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->value<<" ";
		return;
	}
	if(count==0){
		spirallevelorder(root->left,level-1,count);
		spirallevelorder(root->right,level-1,count);
	}
	else{
		spirallevelorder(root->right,level-1,count);
		spirallevelorder(root->left,level-1,count);
	}
	
}
 
int main(){
	int n;
	cin>>n;
	char arr[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];
	}
	node *root=insertion(arr,root,0,n+1);
	cout<<"INORDER: ";
	inorder(root);
	cout<<"\n";
	cout<<"POSTORDER: ";
	postorder(root);
	cout<<"\n";
	cout<<"PRE ORDER: ";
	preorder(root);
	cout<<"\n";
	int height=treeheight(root);
	cout<<"HEIGHT of Tree: "<<height<<" \n";
	for(int i=1;i<=height;i++){
		levelorderprint(root,i);
	}
	cout<<"\n";
	int count=0;
	for( int i=1;i<=height;i++){
		spirallevelorder(root,i,count);
		count=1-count;
	}
}

