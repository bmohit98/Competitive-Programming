#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[]="I am Good Boy mohit";
	int num=0,i=0,max=0;
	int begin,end;
	int len=strlen(str);
	while(str[i]!='\0'){
		if(str[i]!=' '){
			num++;
		}
		else{
			if(max<num)
			{	
				end=i-1;
				max=num;
				begin=end-max+1;
				num=0;
			}
		}
		i++;
	}
	if(str[i]=='\0'){
		if(max<num)
			{	
				end=i-1;
				max=num;
				begin=end-max+1;
				num=0;
			}
	}
	
	for(i=begin;i<=end;i++)
		cout<<str[i];	
	
}
