#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void sum(string a,string b){
	int sum=0,j=0;
	int len1=a.length();
	int len2=b.length();
	int max1=max(len1,len2);
	char str[max1+1]=" ";
	while(len1-1>=0||len2-1>=0||sum==1){
		if(len1-1>=0){
			sum+=a[len1-1]-'0';
		}
		else
			sum+=0;
		if(len2-1>=0){
			sum+=b[len2-1]-'0';
		}
		else
			sum+=0;
		str[max1]=char(sum%2+'0');
		sum/=2;
		len1--;len2--;max1--;	
	}
	cout<<str;
}
int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	sum(str1,str2);
}

