#include<iostream>
#include<string>
using namespace std;
string lcp(string str[],int n){
	int i=0,j=0,flag=0;
	string re,temp,final;
	while(j>=0){
		re=str[0].substr(0,j+1);
		for(i=0;i<n;i++){
			temp=str[i].substr(0,j+1);
			if(re.compare(temp)==0)
			{
				flag=1;
			}
			else{
				if(j==0){
					cout<<"no longer prefix";
					exit(0);
				}	
				flag=0;
			}
		}
		if(flag==1){
			final=re;
			j++;
		}
		else
			return final;
	}	
}
int main(){
	int n;
	int i=0,temp=0,j=0;
	cin>>n;
	string str[n];
	for(i=0;i<n;i++){
		cin>>str[i];
	}	
	string result=lcp(str,n);
	cout<<result;
}
