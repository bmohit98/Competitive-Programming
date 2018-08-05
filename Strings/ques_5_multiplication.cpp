#include<iostream>
#include<string.h>
#include<string>
using namespace std;
string digitmul(char*str1,int a){
	int len2=strlen(str1);
	char c[len2+2];
	c[len2+1]='\0';
	int carry=0,sum=0;
	for(int j=len2-1;j>=0;j--){
		int b=str1[j]-'0';
		sum = a*b + carry;
		carry=sum/10;
		c[j+1]=sum%10+'0';	
	}
	c[0]=carry+'0';
	return c;
}
string add(string re,string nre){
	if(re=="")
		return nre;
	re='0'+re;
	int l2=nre.length();
	int carry=0,n=0;
	char final[l2+1];
	final[l2]='\0';
	for(int j=l2-1;j>=0;j--){
		n= (re[j]-'0') +(nre[j]-'0')+ carry;
		carry=n/10;
		final[j]=n%10+'0';	
	}
	
	return final;	
}
string multiplication(char *str,char*str1){
	int len=strlen(str);
	
	if (len == 0 )
       return "0";
	int i=0,j=0;
	string result="";
	for(i=len-1;i>=0;i--){
		int a=str[i]-'0';
		string adder(len-i-1,'0');
		result =add(result,digitmul(str1,a)+adder);
	}
    int size=result.length();
    if(result[0]=='0')
    	return result.substr(1,size-1);
    else
    	return result;
}
int main(){

	char str[]="9999";
	char str1[]="111";
	cout<<multiplication(str,str1);

}
