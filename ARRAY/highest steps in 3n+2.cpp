#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,m,j;
	int count,max=0,item,steps;
	cout<<"enter range in two number";
	cin>>n>>m;
	//cout<<n<<" ";
	for(i=n;i<=m;i++){
		count=0;
		j=i;
		while(j!=1){
		   if(j%2==0)
				j=j/2;
			else
				j=3*j+1;
			count++;
			
		}
		cout<<i<<" "<<count<<" ";
		if(max<count){
			max=count;
			item=i;
			steps=count;
		}
    }
    cout<<"number "<<item<<" takes "<<steps<<"steps";
	return 0;
}
