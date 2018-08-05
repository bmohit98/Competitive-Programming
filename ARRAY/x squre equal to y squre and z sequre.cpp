#include<iostream>
#include<math.h>
using namespace std;
int perfectsqure(int n){
	int i,temp,k,flag=0;
	
	temp=n/2;
	while(temp!=0){
		k=temp;
		if(pow(k,2)==n){
			return k;
        }
        else if(pow(k,2)>n)
        	temp=temp/2;
        else if(pow(k,2)<n &&pow(k+1,2)>n){
		 return 0;
    	}
    	else if(pow(k,2)<n)
    	temp=temp+1;
        	
	}

}
int main(){
	int n,i,j,y,flag=0;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<n;i++){
		j=n-(i*i);
		y=perfectsqure(j);
		if(y!=0){
			cout<<"("<<i<<","<<y<<")";
			flag=1;
			break;
		}
			
	}
	if(flag==0)
	cout<<"this number have not an pair .";
}
