#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b,c;
	int i=0,j=0,k=0;
	int flag1=0,flag2=0;
	cout<<"string A: ";
	getline(cin,a);
	cout<<"\nstring B: ";
	getline(cin,b);
	cout<<"\nstring C: "; 
	getline(cin,c);
	int len=c.length();
	int lena=a.length();
	int lenb=b.length();
	while(i!=len){
		if(c[i]==a[j]){
			if(j==lena-1){
				flag1=1;
				cout<<"1";
			}
			j++;	
		}
		if(c[i]==b[k]){
			if(k==lenb-1){
				flag2=1;
			}
			k++;
		}
		if(flag1==1&&flag2==1){
			break;
		}
	i++;	
	}
	if(flag1==1&&flag2==1)
		cout<<"yes";
	else
		cout<<"no";
	
}
