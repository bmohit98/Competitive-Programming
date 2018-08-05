#include<iostream>
#include<cstring>
using namespace std;
void printsub(char *s,int begin,int end){
	for(int i=begin;i<=end;i++)
		cout<<s[i];
	cout<<"\n";	
}
int main(){
	char str[]="I am Good Boy  ";
	int num,i=0;
	int len=strlen(str);
	while(str[i]!='\0'){
		if(str[i]==' '||i==0){
		if('a'<=str[i+1]&&str[i+1]<='z'){
			str[i+1]=str[i+1]+'A'-'a';
		}
		}
		i++;
	}
	
	for(i=0;i<len;i++)
	cout<<str[i];	
	
}
