#include<iostream>
#include<string>
using namespace std;
int main(){
	char str1[100]="34 121 0123 895";
	//int len=strlen(str1);
	int i=0;
	int num=0,max=0;
	while(str1[i]!='\0'){
		if(str1[i]!=' '){
		 	num=num*10+str1[i]-'0';	
		}
		else{
			if(max<num)
				max=num;
				num=0;	
		}
		i++;
	}
	if(str1[i]==0){
			if(max<num)
				max=num;
	}
	cout<<max;

}
