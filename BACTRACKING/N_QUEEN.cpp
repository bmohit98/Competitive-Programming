#include<iostream>
#include<string>
#define n 4
using namespace std;
//int n=6
bool issafe(int board[n][n],int row,int col){
	int i,j;
	for(i=0;i<n;i++){
		if(board[row][i]==1)
			return 0;
	}
	for(i=0;i<n;i++){
		if(board[i][col]==1)
			return 0;
	}
	for(i=row+1,j=col-1;i<n&&j>=0;i++,j--){
		if(board[i][j]==1)
			return 0;
	}
	for(i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
		if(board[i][j]==1)
			return 0;
	}
	return 1;
}
int nqueen(int board[n][n],int col){
	int i,j;
	if(col>=n){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				cout<<board[i][j]<<" ";
			cout<<"\n";	
		}
		return 1;
		
	}
	for(i=0;i<n;i++){
		if(issafe(board,i,col)){
			board[i][col]=1;
			if(nqueen(board,col+1)){
				return 1;
			}
			board[i][col]=0;
		}
	}
	return 0;
}
int main(){
	int board[n][n]={0};
	cout<<nqueen(board,0);
}

