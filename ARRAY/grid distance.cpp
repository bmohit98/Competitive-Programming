#include<iostream>
#include<math.h>
using namespace std;
typedef struct array{
	int x;
	int y;
	struct array *next;
}array;
int main(){
	int n,steps=0;
	cin>>n;
	array a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].x;
		cin>>a[i].y;
	}
	
	for(int i=0;i<n-1;i++){
		if((a[i].x-a[i+1].x)==(a[i].y-a[i+1].y))
			steps=steps+abs((a[i].x-a[i+1].x));
		else if(abs(a[i].x-a[i+1].x)>abs(a[i].y-a[i+1].y))
			steps=steps+abs((a[i].x-a[i+1].x));
		else
			steps=steps+abs((a[i].y-a[i+1].y));
	}
	cout<<"number of steps: "<<steps;
}
