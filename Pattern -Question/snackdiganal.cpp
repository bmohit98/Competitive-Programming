#include<iostream>
#include<string>
using namespace std;
void sndigal(int **a,int x,int y,int m,int n){
	for(int i=x,j=y;(i<=m-1&&j<=n-1);i++,j++){
		cout<<a[i][j]<<" ";
	}
	cout<<"\n";
}
int main(){
	int n,i,j;
	cin>>n;
	int **a;
	a=new int*[n];
	for( i=0;i<n;i++){
		a[i]=new int[n];
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=n-1;i>=0;i-=1){
		sndigal(a,i,0,n,n);
		if(i!=0)
		sndigal(a,0,i,n,n);
	}
	
}

