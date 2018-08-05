#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int n,i,k=1,flag=0;
	cout<<"please enter array size";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	set<int> s(arr,arr+n);
	set<int>::iterator s1;
	int len=s.size();
	//cout<<len;
	for(s1=s.begin();s1!=s.end();s1++){
		//cout<<*s1;
		int m=*s1;
		if((len-k)==m)
			{
				flag=1;
				cout<<"return 1 = "<<m;
				break;
			}
		k++;
	}
	if(flag==0)
	cout<<"return -1"<<"\n"; 
	
	 
}
	

