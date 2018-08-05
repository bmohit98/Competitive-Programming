#include<iostream>
#include<string>
using namespace std;
void generatingstring(char s[],char c[],int n,int len){
	if(n==len){
		cout<<s<<"\n";
		return;
	}
	for(int i=0;i<len;i++){
		s[n]=c[i];
		generatingstring(s,c,n+1,len);
	}
	
}		

int main(){
	char s [3];
	s[3]={'\0'};
	char c[]={'a','b','c'};
generatingstring(s,c,0,3);

}

