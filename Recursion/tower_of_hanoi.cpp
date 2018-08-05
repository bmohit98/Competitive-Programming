 #include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
void move(int n,char from,char end,char aux_rod){
	if(n==1){
		cout<<"Move disk "<<n<<" from "<<from<<" to "<<end<<"\n";
		return;
	}
	move(n-1,from,aux_rod,end);
	cout<<"Move disk "<<n<<" from "<<from <<" to "<<end<<"\n";
	move(n-1,aux_rod,end,from);
}
int main(){
	int n;
	cin>>n;
	move(n,'A','B','C');
}

