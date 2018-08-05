#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[5][20]={"ram","shyam","abcde","mohit","aacdf"};
	int i=0,j=0;
	char temp[20];
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	for(i=0;i<5;i++){
		cout<<str[i]<<"\n";
	}
}
