#include<iostream>
#include<string>
using namespace std;
int main(){
	int count=0,i=0,j=0,k=0,space=0;
	string str;
	getline(cin,str);
	int len=str.length();
	char nstr[len]={0};
	for(i=len-1;i>=0;i--){
		
		if(str[i]==' '){
			space=i;
			while(str[i-1]==' ')
				{
					space=i;
					i--;
				}
			
			cout<<space<<" "<<count<<"\n";
			while(count>0){
				nstr[j]=str[space+1];
				space++;
				count--;
				j++;
			}	
			nstr[j++]=' ';
			count=0;
		}
		else{
			count++;
		}
	}
	i=0;
	while(count>0){
		nstr[j]=str[i];
		i++;
		count--;
		j++;
	}	
cout<<nstr;
}

