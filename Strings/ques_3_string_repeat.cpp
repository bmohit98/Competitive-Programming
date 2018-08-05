#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
char *repeat(char* s,int n){
	char *str=(char*)malloc(sizeof(char)*300);
	int count=0,i=0,m=0;
	if(n==0)
	return str;
	for(int j=0;j<n;j++){
		i=0;
		while(s[i]!=0){
			str[m]=s[i];
			i++;
			m++;
		}
	}
	str[m]='\0';
	//cout<<str;
    return str;
}
int main(){
	char s[100],ch;
	int n,i=0;
	while((ch=getchar())&&ch!='\n'){
		s[i]=ch;
		i++;
	}
	cin>>n;
	char * str =repeat(s,n);
	cout<<str;
}
