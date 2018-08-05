#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void reverse(char *s,int begin,int end){
	if(begin>=end)
		return;
	char temp=s[begin];
	s[begin]=s[end];
	s[end]=temp;	
	reverse(s,begin+1,end-1);	
}
int main(){
	char c[]="abcdefg";
	reverse(c,0,strlen(c)-1);
	cout<<c;



}

