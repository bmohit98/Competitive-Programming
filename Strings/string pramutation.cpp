#include<iostream>
#include<cstring>
using namespace std;
void permutaion(string s,int first,int last){
	int i=0;
	if(first==last)
		cout<<s<<"\n";
	else
	{
		for( i=first;i<=last;i++){
			swap(s[i],s[first]);
			permutaion(s,first+1,last);
			swap(s[i],s[first]);
		}
	}
}
int main(){
	int i;
	string s1,s2,s3;
	getline(cin,s1);
	int len=s1.length();
	for(i=0;i<len;i++)
	permutaion(s1,0,len-1);
}



