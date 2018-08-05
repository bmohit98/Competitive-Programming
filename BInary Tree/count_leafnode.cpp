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
int count(node *&root){
	if(root == NULL)       
    	return 0;
	if(root->left==NULL&&root->right==NULL){
		return 1;
	}
	return count(root->left)+count(root->right);
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
void inOrder(node *& root)
{
    if (root != NULL)
    {
    	cout << root->value <<" ";
        inOrder(root->left);
        
        inOrder(root->right);
    }
}
 
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n+1;i++){
		cin>>arr[i];
	}
	node *root=insertion(arr,root,0,n+1);
	inOrder(root);
	int count1 =count(root);
	cout<<count1;


}

