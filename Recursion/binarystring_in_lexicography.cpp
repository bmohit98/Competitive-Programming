#include<iostream>
#include<string>
using namespace std;
void generatingstring(char s[],int n,int len){
	if(n==len){
	cout<<s<<"\n";
	return;}
	s[n]='0';
	generatingstring(s,n+1,len);
	s[n]='1';
	generatingstring(s,n+1,len);
}
int main(){
	int k;
	cin>>k;
	char c[k];
    c[k]='\0';
generatingstring(c,0,k);

}

