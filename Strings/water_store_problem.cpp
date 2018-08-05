#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int max=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	int water[max][n]={0};
		for(int i=0;i<max;i++)
			for(int j=0;j<n;j++)
				water[i][j]=0;
		for(int i=0;i<n;i++){
			for(int j=max-arr[i];j<max;j++){
				water[j][i]=1;
			}
		}
		for(int i=0;i<max;i++){
		for(int j=0;j<n;j++)
			cout<<water[i][j]<<" ";
		cout<<"\n";
		}
		int k=0,temp,result=0,start,end;
	for(int i=0;i<max;i++){
		start=0;temp=0;
		for(int j=0;j<n;j++){
			if(water[i][j]){
				if(start==0){
					start=1;
				}
				else{
					result+=temp;
					temp=0;
				}
			}
			else{
				if(start)
				temp++;		
			}
		}
	}	

	cout<<result;

}

