#include<iostream>
#include<cstring>
using namespace std;
void printsub(char *s,int begin,int end){
	for(int i=begin;i<=end;i++)
		cout<<s[i];
	cout<<"\n";	
}
int main(){
	char str[]="IamboyGoodboy";
	char str1[]="boy";
	int num=0,i=0,j=0;
	int len=strlen(str);
	int len1=strlen(str1);
	while(str[i]!='\0'){
		if(str[i]==str1[j]){
			num++;
			j++;
			if(j==len1){
				cout<<i-num+1<<" ";
			}
			
		}
		else
		{
			num=0;
			j=0;
		}
		i++;
	}
	
	
}
