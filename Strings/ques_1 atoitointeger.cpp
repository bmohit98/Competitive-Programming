#include<iostream>
#include<string>
using namespace std;
int atoi(string str){
	int num=0,i=0;
	while(str[i]!=0){
		if(i==0&&str[i]==' '){
			while(str[i]==' ')
			 i++;
		}
			
		if('0'<=str[i]&&str[i]<='9'){
			num=num*10+str[i]-48;
		}
		else{
			if(i==0){
				return 0;
			}
			else
				break;
		}
		i++;
	}
	return num;
}
int main(){
	int num;
	string str;
	getline(cin,str);
	num=atoi(str);
	if(num>0)
		cout<<num;
	else
		return 0;
}
