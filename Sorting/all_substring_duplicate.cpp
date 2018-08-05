#include<iostream>
#include<string>
using namespace std;
bool palindrom(char *s,int begin,int end){
	for(int i=begin;i<=end;i++){
		if(s[begin]!=s[end])
			{
				return false;
			}
			end--;
	}
	return true;
}
int main(){
char b[]="abcdbe";
	int i,k=0,j,flag=0;
	int len=sizeof(b)/sizeof(char);
	cout<<len;
	for( i=0;i<len-1;i++){
		for(j=i+1;j<len-1;j++){
			for(k=i;k<=j;k++){
				if(k+1<=j){
					if(b[k]>b[k+1]){
						flag=1;
						
					}
				}
			}
			if(flag==1){
				for(k=i;k<=j;k++)
				cout<<b[k];
				cout<<" ";
			}
			flag=0;
		}
		
	}
}

