#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m,i,k=0,l=0,j;
	cin>>n>>m;
	int a[n][m];
	int x=m;
	int y=n;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	while(k<n&&l<m){
		for(i=l;i<m;i++){
			cout<<a[k][i]<<" ";
		}
		k++;
		for(i=k;i<n;i++){
			cout<<a[i][m-1]<<" ";
		}
		m--;
		if(k<n){
			for(i=m-1;i>=l;i--){
				cout<<a[n-1][i]<<" ";
			}
			n--;
		}
		if(l<m){
			for(i=n-1;i>=k;i--){
				cout<<a[i][l]<<" ";
			}
			l++;
		}		
    }
}

