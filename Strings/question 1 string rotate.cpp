#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,flag=0,j=0;
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	int len=s1.length();
	int len2=s2.length();
    while(j!=len2){
		if(s1[i]==len){
			i=0;
		}
		else if(s1[i]==s2[j]){
			cout<<"yes";
			flag=1;
			break;
			j++;
			i++;
		}
		else
		{
			if(j>2)
				break;
			j=0;
			i++;
		}
		/*s3.append(s1,i+1,len-i-1);
		s3.append(s1,0,i+1);
		if(!(s2.compare(s3)))
			{
				cout<<"yes";
				flag=1;
				break;
			}*/	
	}
	/*	s3=s1.substr(temp);
		cout<<s3<<"\n";
		s3.append(s1,0,(s1.length()-temp-1));
		cout<<s3;
		if(!(s2.compare(s3)))
		  cout<<"yes";
		else
			cout<<"No";  
}*/
if(flag==0)
	cout<<"no";
}
