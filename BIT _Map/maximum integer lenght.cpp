#include<iostream>
#include<string>
using namespace std;
int main(){
	char str1[100]="abc346789bcd01234gf";
	int i=0,index=0;
	int num=0,max=0;
	while(str1[i]!='\0'){
		if('0'<=str1[i]&&str1[i]<='9'){
		 	num++;	
		}
		else{
			if(max<num){
				index=i-1;
				max=num;
			}
				num=0;	
		}
		i++;
	}
	if(str1[i]==0){
			if(max<num)
				max=num;
	}
	
	i=index+1-max;
	while(i<=index){
		cout<<str1[i];
		i++;
	}
}
