#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n,j=1,i,flag=1;
	cin>>n;
	stack <int> s1;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	s1.push(j);
	for(i=0;i<n;i++){
		if(s1.top()==arr[i]){
			s1.pop();
			if(s1.empty()){
			j++;
			s1.push(j);
			}
		}
		else if(s1.top()<arr[i]){
			while(s1.top()<arr[i]){
				j++;
				s1.push(j);
			}
			s1.pop();
			
		}
		else{
			cout<<"given sequence is not selected";
			flag=0;
			break;
		}	
	}
	if(flag==1){
		cout<<"given sequence is selected";
	}
}
