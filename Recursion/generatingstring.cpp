#include<iostream>
#include<string>
using namespace std;
void generatingstring(char s[],int n){
	if(n==-1){
	cout<<s<<"\n";
	return;}
	s[n]='0';
	generatingstring(s,n-1);
	s[n]='1';
	generatingstring(s,n-1);
}
int main(){
	int k;
	cin>>k;
	char c[k];
 c[k]='\0';
generatingstring(c,k-1);

}

