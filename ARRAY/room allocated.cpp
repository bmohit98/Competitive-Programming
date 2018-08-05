#include<iostream>
#include<algorithm>
using namespace std;
typedef struct time{
int arr,dep;
}time;

bool compare(time a, time b)
{
	return a.arr < b.arr;
}

int main(){
	int n,k,temp=0,flag=0,j=0;
	cin>>n;
	cout<<"enter the room";
	cin>>k;
	time t1[n];
	for (int i=0;i<n;i++){
		cin>>t1[i].arr;
		cin>>t1[i].dep;
	}
	sort(t1,t1+n,compare);
	
	for (int i=0;i<k+1;i++){
		if(temp<k)
			temp++;
        else if(temp>=k){
        	for(int i=0;i<temp;i++){
        		if(t1[i].dep<t1[k+j].arr){
        			temp++;j++;
				}
				 if(temp==n){
					flag=1;
					cout<<"true";
					break;
				}
			}
		}
	
	}
		

/*	if(flag==1){
		cout<<"True";
	}*/
	if(flag==0)
	cout<<"False";
}

