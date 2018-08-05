#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,m,i,k=0,l=0,j;
	cin>>n;
	int arr[2*n-1][2*n-1]={0};
	int x=2*n-1;
	int y=2*n-1;
	int p=2*n-1;
	
	while(k<x&&l<y){
		for(i=l;i<y;i++){
			arr[k][i]=n;
		}
		k++;
		for(i=k;i<x;i++){
			arr[i][y-1]=n;
		}
		y--;
		for(i=y-1;i>=l;i--){
			arr[x-1][i]=n;
		}
		x--;
		for(i=x-1;i>=k;i--){
			arr[i][l]=n;
		}
		l++;	
		n--;	
    }
    for(i=0;i<p;i++){
    	for(j=0;j<p;j++)
    		cout<<arr[i][j];
    		cout<<"\n";
	}
}

