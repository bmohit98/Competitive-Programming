#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef struct count{
	char ch;
	int c;
}count1;
bool compare(count1 a,count1 b){
	return a.c > b.c;
}
int main(){
	string str;
	count1 c1[26]={{0,0}};
	int d,i=0,j=0;
	char ch;
	getline(cin,str);
	int len=str.length();
	cout<<"enter the sidtance";
	cin>>d;
	while(str[i]!='\0'){
		char x=str[i];
		if(c1[x-'a'].c!=0){
			c1[x-'a'].c++;
		}
		else{
			c1[x-'a'].ch=x;
			c1[x-'a'].c=1;
		}
		str[i]='\0';
		i++;
	}
	sort(c1,c1+26,compare);
	i=0;
	while(c1[i].c!=0){
		int k=c1[i].c;
		int p=i;
		while(str[p]!='\0')
			p++;	
		for(int j=0;j<k;j++){
			if(p+j*d>=len){
				cout<<"rearrange is not possible";
				return 0;
			}
			str[p+j*d]=c1[i].ch;
		}
		i++;
	}
	cout<<str;
}
