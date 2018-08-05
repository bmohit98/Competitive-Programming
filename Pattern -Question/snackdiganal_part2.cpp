#include<iostream>
#include<string>
using namespace std;
void sndigal(int **a,int x,int y,int n,int m){
	int i=x;
	int j=y;
	if(i<n&&j<m){
		for(;i<n&&j<m;i++,j++){
			cout<<a[i][j]<<" ";
		}
	}
	if(j>=m){
		j--;
		i--;
	}
	i--;
	for(;i>=0&&j>=0;i--,j--)
		cout<<a[i][j]<<" ";
		
	cout<<"\n";

}
int main(){
	int n,i,j,m;
	cin>>n>>m;
	int **a;
	a=new int*[n];
	for( i=0;i<n;i++){
		a[i]=new int[m];
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	j=0;
	for(i=n-1;i>=0;i-=2)
		sndigal(a,i,j,n,m);
	if(i==-1)
		j=1;	
	else if(i==-2)
		j=2;
	i=0;	
	for(;j<n;j+=2)
		sndigal(a,i,j,n,m);
	
}

