#include<iostream>
using namespace std;
int main(){
	int n,m,k=0;
	int i,j;
	cin>>m>>n;
	int temp[n];
	int mat[m][n];
	//int mat1[m][n];
	for( i=0;i<m;i++){
		for( j=0;j<n;j++){
			cin>>mat[i][j];
		//	mat1[m][n]=1;
		}
	}
	//for zero checking................................................
	for( i=0;i<m;i++){
		for( j=0;j<n;j++){
			if(mat[i][j]==0){
				temp[k++]=i;
				temp[k++]=j;
			}
		}
	}
	for( i=0;i<k;i=i+2){
		for( j=0;j<n;j++){
			mat[temp[i]][j]=0;
			mat[j][temp[i+1]]=0;
			
		}
	}
	for(i=0;i<m;i++){
		for( j=0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	//for one checking...............................................
		for( i=0;i<m;i++){
		for( j=0;j<n;j++){
			if(mat[i][j]==1){
				temp[k++]=i;
				temp[k++]=j;
			}
		}
	}
	for( i=0;i<k;i=i+2){
		for( j=0;j<n;j++){
			mat[temp[i]][j]=1;
			mat[j][temp[i+1]]=1;
			
		}
	}
	for(i=0;i<m;i++){
		for( j=0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
}
