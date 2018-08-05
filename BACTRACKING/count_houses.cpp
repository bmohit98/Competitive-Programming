#include<iostream>
using namespace std;
int count=0;
void counthouse(int **arr,int i,int j,int row,int col,int **sol){
	if(i>=row||j>=col||j<0||i<0||sol[i][j]==-1||arr[i][j]==0){
		return ;
	}
	if(arr[i][j]==1){
		count++;
		sol[i][j]=-1;
		counthouse(arr,i+1,j,row,col,sol);
		counthouse(arr,i,j+1,row,col,sol);
		counthouse(arr,i-1,j,row,col,sol);
		counthouse(arr,i,j-1,row,col,sol);
	}
}
int main(){
	int n,m,i,j;
	cin>>n>>m;
	int **arr=new int*[n];
	int **sol=new int*[n];
	int sum=0;
	for(i=0;i<n;i++)
	{
		arr[i]=new int[m];
		sol[i]=new int [m];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
			sol[i][j]=0;
		}
	}
	int max=0;
	for(i=0;i<n;++i){
		for(j=0;j<m;j++){
			count=0;
			if(arr[i][j]){
				counthouse(arr,i,j,n,m,sol);
				if(count>0){
					sum++;
				}
				if(max<count)
					max=count;
			}
		}
	}
	cout<<sum<<"\n";
	cout<<max;
}

