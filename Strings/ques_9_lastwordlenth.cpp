#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int i=0,temp=0,space=0;
	while(str[i]!=0){
		if(str[i]==' '){
			space=i+1;
		}
		else {
			temp=i-space+1;
			if(str[i+1]=='\0'){
				temp=i-space+1;
			}
		}
		i++;
	}
	if(temp!=0)
	cout<<temp;
	else 
	return 0;
}

