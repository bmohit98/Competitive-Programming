#include<iostream>
using namespace std;
int counter=0;
int count(int x,int y,int n, int m)
{  
    if (x==n&&y==m){
        cout<<"("<<x<<","<<y<<")"<<" \n";
        counter++;
        return 1;
	}
    if(x+1<=n){
	    cout<<"("<<x<<","<<y<<")"<<" ";
		count(x+1,y,n, m);
	}
	if(y+1<=m){
		cout<<"("<<x<<","<<y<<")"<<" ";
		count(x,y+1,n,m);
	}
}
int main()
{
    int m,n;
    cin>>n>>m;
    count(0,0,n,m);
    cout<<counter;
    return 0;
}

