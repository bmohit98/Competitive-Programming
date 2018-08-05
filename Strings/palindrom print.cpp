#include<iostream>
#include<cstring>
using namespace std;
bool palindrom(char*s,int begin,int end){
	bool flag=false;
	int j=end;
	//cout<<begin<<" "<<end<<"\n";
	for(int i=begin;i<=j;i++){
		if(s[i]==s[j]){
			flag=true;
			j--;
		}
		else{
			flag=false;
			break;
	}
	}
	if(flag){
		for(int i=begin;i<=end;i++)
		cout<<s[i];	
		cout<<"\n";
	}	
	return flag;
}
int main(){
	char str[]="noonmadamnight";
	int begin,end;
	int len=strlen(str);
	for(begin=0;begin<len;begin++){
		for(end=begin;end<len;end++){
			if(end-begin>=2)
			palindrom(str,begin,end);
		}
	}
}

