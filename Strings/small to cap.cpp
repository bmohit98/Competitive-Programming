#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[]="I am Good Boy  ";
	int num,i=0;
	int len=strlen(str);
	while(str[i]!='\0'){
		if('a'<=str[i]&&str[i]<='z'){
			str[i]=str[i]+'A'-'a';
		}
		i++;
	}
	
	for(i=0;i<len;i++)
	cout<<str[i];	
	
}
