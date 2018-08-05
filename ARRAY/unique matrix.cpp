#include<iostream>
#include<map>
using namespace std;
int main(){
	//map<int,int>m1;
	int m,n;
	int a,i,j;
	int max=0;
	cout<<"please enter the matrix leanth in row and column";
	cin>>n>>m;
	int matrix[n][m];
	for( i=0;i<n;i++){	
		for(j=0;j<m;j++){		
			cin>>a;
			matrix[i][j]=a;
		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max<matrix[i][j])
				max=matrix[i][j];			
		}
	}
	int count[max+1]={0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			count[matrix[i][j]]++;
		}
	}
	for(i=0;i<=max;i++)
		if(count[i]==1)
			cout<<i<<" ";
	return 0;	
	
}

