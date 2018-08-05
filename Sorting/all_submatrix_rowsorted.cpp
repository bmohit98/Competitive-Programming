#include<iostream>
using namespace std;
int sum(int **arr,int rs,int cs,int n,int m){
	int sum1=0;
	for(int i=rs;i<n;i++)
		for(int j=cs;j<m;j++)
			sum1+=arr[i][j];
	return sum1;
}
int main(){
	int n,m,i,j,temp=0,size,la,lb,flag=1;
	cin>>n>>m;
	int **arr;
	arr=new int*[n];
	for(i=0;i<n;i++)
		arr[i]=new int[m];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>arr[i][j];
	for(size=1;size<=n;size++){
		for(i=0;i<n-size+1;i++){
			for(j=0;j<m-size+1;j++){
				for(la=i;la<i+size;la++){
					for(lb=j;lb<j+size;lb++){
						if(lb+1<j+size){
							if(arr[la][lb]>arr[la][lb+1]){
								flag=0;	
								break;
							}
						}
					}
				}
				if(flag==1){
					for(la=i;la<i+size;la++)
							for(lb=j;lb<j+size;lb++)
								cout<<arr[la][lb]<<" ";
					cout<<"\n";
					temp++;
				}	
				flag=1;
		   }
    	}
    }
	cout<<temp;
}	

