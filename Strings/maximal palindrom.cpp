#include<iostream>
#include<cstring>
using namespace std;

bool palindrom(char*s,int begin,int end){
	bool flag=false;
	int j=end;
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
	return flag;
}
int main(){
	char str[]="noonmadammadam";
	int begin,end;
	int mbegin,mend;
	int max=0;
	int len=strlen(str);
	for(begin=0;begin<len;begin++){
		for(end=begin;end<len;end++){
			if(end-begin>2){
				int len1=end-begin+1;
				if(palindrom(str,begin,end)==true){
					if(str[begin-1]!=str[end+1]||begin==0){
						for(int i=begin;i<=end;i++)
							cout<<str[i];
						cout<<"\n";
					}
				}
			}
		}
	}
}

