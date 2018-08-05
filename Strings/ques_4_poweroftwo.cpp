#include<iostream>
#include<string.h>
using namespace std;
int poweroftwo(char *str){
	int len=strlen(str);
	int num=0;
	if(len==1&&str[len-1]==1)
	return 0;
	while(len!=1||str[len- 1] != '1'){
		if((str[len-1]-'0')%2==1)
			return 0;
		int j=0;
		for(int i=0;i<len;i++){
			num=num*10+str[i]-'0';  
			if(num<2){
				if(i!=0)
					str[j++]='0';
				continue;		
			}
			str[j++]=(int)num/2+'0';
			num=num%2;
		}	
		len=j;		
	}
	return 1;
}
int main(){

	char str[]="65536";
	cout<<poweroftwo(str);

}

