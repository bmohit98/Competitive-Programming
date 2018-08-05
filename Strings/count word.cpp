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
		if(str[i]==' ' && str[i-1]!=' '&&str[i+1]!=' '){
			num++;
		}
		i++;
	}
	if(str[i]=='\0')
		num++;
	cout<<num;	
	
}
