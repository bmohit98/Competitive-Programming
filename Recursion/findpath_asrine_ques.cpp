#include<iostream>
#include<string>
#define max 100
using namespace std;
int arr[max][max];
int r,c,flag=0;
int findPath(int x,int y,int m,int n ){
	if(x==m&&y==n){
		cout<<"("<<x<<","<<y<<")"<<" ";
		flag=1;
		return 1;	
	}
	if(arr[x][y]==1){
		arr[x][y]=0;
		
		if(x-1>=0)
			if(findPath(x-1,y,m,n))
				cout<<"("<<x<<","<<y<<")"<<" ";
		if(x+1<r)
			if(findPath(x+1,y,m,n))
				cout<<"("<<x<<","<<y<<")"<<" ";
		if(y-1>=0)
			if(findPath(x,y-1,m,n))
				cout<<"("<<x<<","<<y<<")"<<" ";
		if(y+1<c)
			if(findPath(x,y+1,m,n))
				cout<<"("<<x<<","<<y<<")"<<" ";
	}
}
int main(){
	int m,n,x,y;
	cout<<"enter the rows and column";
	cin>>r>>c;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
	cout<<"point from";
	cin>>x>>y;
	cout<<"point to";
	cin>>m>>n;
	findPath(x,y,m,n);
	if(flag==1)
	cout<<"("<<x<<","<<y<<")"<<" ";
	else
	cout<<"not possible";
}

