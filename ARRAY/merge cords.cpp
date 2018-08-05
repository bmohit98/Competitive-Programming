#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	int  first,last,l,f;
	int marge[2];
	cin>>n;
	int array[n][2];
	
	
	for(i=0;i<n;i++){
		cin>>array[i][0];
		cin>>array[i][1];
	}
	cin>>marge[0]>>marge[1];
	for(i=0;i<n;i++){
		if(marge[0]>array[i][0] && marge[0]<array[i][1]){
		   first=array[i][0];
			f=i;
	   }
		else if(marge[0]>array[i][1]&&marge[0]<array[i+1][0]){
			array[i+1][0]=marge[0];
			f=i+1;
	    }
		if(marge[1]<array[i][1]&&marge[1]>array[i][0]){
			last=array[i][1];
			l=i;
		}
		else if(marge[1]>array[i][1]&&marge[1]<array[i+1][0]){
			array[i][1]=marge[1];
			l=i;
	    }
	    else if(marge[0]>array[i][1]&&marge[1]<array[i+1][0])

 	}
		for(i=0;i<n;i++){
		if(i==f){
		cout<<"("<<array[f][0]<<",";
		cout<<array[i+(l-f)][1]<<")"<<" ";
		i=i+(l-f);
	    }
	    else{
		
	    cout<<"("<<array[i][0]<<",";
		cout<<array[i][1]<<")"<<" ";
	   }
    }
	}
	
