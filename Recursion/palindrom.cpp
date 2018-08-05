#include<iostream>
#include<string.h>

using namespace std;
bool palindrom(char*s,int begin,int end){
	if(begin==end)
		return true;
	if(s[begin]==s[end])	
	return palindrom(s,begin+1,end-1);
	else
		return false;	
}
int main(){
	char c[]="jashdijdi";
	bool ans=palindrom(c,0,strlen(c)-1);
	cout<<ans;
}

