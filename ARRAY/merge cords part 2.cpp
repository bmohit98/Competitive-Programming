#include<iostream>
using namespace std;
typedef struct array{
	int first;
	int second;
	struct array *next;
}array;
int main(){
	int n,i,j;
	int  first,last,l,f;
	int marge[2];
	cin>>n;
	 array *a1[n];
	 array *a2;
	for(i=0;i<n;i++){
		cin>>a1[i]->first;
		cin>>a1[i]->second;
		a1[i]->next=a1[i+1];
		a1[i+1]->next=NULL;
	}
	cin>>marge[0]>>marge[1];
	for(i=0;i<n;i++){
		if(marge[0]>a1[i]->first && marge[0]<a1[i]->second){
		   //first=array[i][0];
			f=i;
			a2->first=a1[i]->first;
			
	   }
		else if(marge[0]>a1[i]->second&&marge[0]<a1[i+1]->first){
			a2->first=marge[0];
			f=i;
	    }
	     else if(marge[0]>a1[i]->second&&marge[1]<a1[i+1]->first){
	    	a2->first=marge[0];
			a2->second=marge[1];
			f=i;
			l=i;	
		}
		if(marge[1]<a1[i]->second&&marge[1]>a1[i]->first){
			l=i;
			a2->second=a1[i]->second;
		}
		else if(marge[1]>a1[i]->second&&marge[1]<a1[i+1]->first){
				l=i;
				a2->second=marge[1];
	    	}
	    	
	    else if(marge[0]>a1[i]->second&&marge[1]<a1[i+1]->first){
	    	a2->first=marge[0];
			a2->second=marge[1];
			f=i;
			l=i;	
		}

 	}
 
 		a1[f-1]->next=a2;
 		a2->next=a1[l+1];
		i=0;
		while(a1[i]!=NULL){
	
	    cout<<"("<<a1[i]->first<<",";
		cout<<a1[i]->second<<")"<<" ";
		i++;
	   }
	}
	
