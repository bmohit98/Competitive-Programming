#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int j=0,count=1,i=0;
	char ch;
	string str[n];
	if(n==1||n>0){
		str[0]+='1';
	}
	for( i=1;i<n;i++){
		int len=str[i-1].length();
		while(j<len){
			ch=str[i-1][j];
			if(str[i-1][j]==str[i-1][j+1]){
				count++;
			}
			else{
				str[i]+=(char(count+'0'));
				str[i]+=(ch);
				count=1;
			}
			j++;	
		}	
		j=0;
	}
	cout<<str[n-1];
return 0;
}

