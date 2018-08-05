#include<iostream>
using namespace std;
void reverse(char *s,int begin,int end){
	int i=begin;
	
	while(i<=end){
		char temp=s[end];
		s[end]=s[i];
		s[i]=temp;
		i++;
		end--;
	}
}
int main(){
	char str1[100]="32 0121 3421 543 abcd";
	int i=0;
	int num=0;
	while(str1[i]!='\0'){
		if(str1[i]!=' '){
		 	num++;
		}
		else{
				int end=i-1;
				int begin=end-num+1;
				reverse(str1,begin,end);
				num=0;	
		}
		i++;
	}
	if(str1[i]==0){
			int end=i-1;
			int begin=end-num+1;
			reverse(str1,begin,end);	
	}
	cout<<str1;
}
