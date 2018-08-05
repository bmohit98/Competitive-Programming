#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,temp=0,j=0,l=0,m,f,k;
	int max=0;
	cin>>n;
	int *a1[n/2];
	int len[n/2];
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			temp++;
		}
		if(a[i]<0||((a[n-1]>0)&&(i==n-1))){
			a1[j]=(int*)malloc(sizeof(int)*temp);
			int k=(i-temp);
			if(i==n-1&&a[i]>0)
				k=(i+1)-temp;
			len[j]=temp;
			for(m=0;m<temp;m++){
				a1[j][m]=a[k];
				//cout<<a1[j][m]<<" ";
				k++;
			}
			//cout<<"\n";
			j++;
			temp=0;
		}
	}
	int sum[j]={0};
	for(int i=0;i<j;i++){
		for(int k=0;k<len[i];k++)
			sum[i]+=a1[i][k];
		cout<<sum[i]<<"\n";	
	}
	for(int i=0;i<j;i++){
		if(max<sum[i]){
			max=sum[i];
			m=i;
		}
		if(max==sum[i]){
			if(len[m]<len[i])
				f=i;
			else if(len[m]>len[i])
				f=m;
			else{
				if(a1[m][0]>a1[i][0])
					f=m;
				else
					f=i;
			}
		}
	}
	for(int i=0;i<len[f];i++){
		cout<<a1[f][i]<<" ";
	}
}
