#include<iostream>
#include<string>
using namespace std;
void generatingstring(char s[],int n,bool flag){
	if(n==-1){
	cout<<s<<"\n";
	return;}
	s[n]='0';
	generatingstring(s,n-1,true);
	if(flag){
	s[n]='1';
	generatingstring(s,n-1,false);
	}
}
int main(){
	int k;
	cin>>k;
char c[k]={0};
generatingstring(c,k-1,true);

}

